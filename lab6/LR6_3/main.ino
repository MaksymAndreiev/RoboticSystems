#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>

volatile int16_t number = 0;
volatile bool sign_flag = 0;

void UART_init() {
    UBRR0 = 416;                                    //Швидкість передачі 4800 Бод
    UCSR0A |= (1 << U2X0);                            //Швидкість передачі подвійна
    UCSR0B |= (1 << RXCIE0);                          //Дозволяємо переривання по завершенню читання
    UCSR0B |= (1 << RXEN0) | (1 << TXEN0);              //Дозволяємо читання та запис
}

void UART_transmit(uint8_t value)                    //Функція для передачі даних
{
    while (!(UCSR0A & (1 << UDRE0)));
    UDR0 = value;                                    //Записуємо значення
}

int32_t function(int32_t v)                        //Функція для розрахунку функції f(x)
{
    return ((v * v) - 10 * v + 5);
}

void UART_create_int16t(uint8_t val)                //Функція для утворення числа типу int16_t із прочитаних елементів
{
    number *= 10;                                   //Переходимо до запису наступного розряду
    if (sign_flag) {                                  //Якщо флаг знаку встановлено, то було прочитано від'ємне число
        number -= val;                              //Віднімаємо передане значення
    } else number += val;                           //Інакше додаємо передане значення
}

void UART_transmit_int(int32_t val)                //Функція для підготовки числа до виведення в монітор
{
    uint8_t mas[12], i = 0;                         //Створюємо масив, куди будемо розподіляти наш результат
    if (val > 0) {                                    //Якщо значення додатнє
        do {
            mas[i++] = val % 10 +
                       0x30;                 //Записуємо в масив результат остачі від ділення на 10, виділяємо необхідний розряд
            val /= 10;                                  //Зменшуємо число в 10 разів, переходимо до наступного розряду
        } while (val > 0);                          //Доки значення більше 0
    } else if (val < 0) {                            //Інакше якщо значення від'ємне
        do {
            mas[i++] = ((val % 10) * (-1)) + 0x30;      //Остачу від ділення множимо на -1, щоб позбавитися знака мінус
            val /= 10;                                  //Зменшуємо число в 10 разів, переходимо до наступного розряду
        } while (val < 0);                          //Доки значення меньше 0
        mas[i++] = 0x2D;                            //Записуємо ASCII код мінуса
    } else mas[i] = 0;                              //Інакше записуємо 0 в масив
    for (; i > 0; i--) {
        UART_transmit(mas[i - 1]);                  //Передаємо дані поелементно
    }
}

int main()                                            //Головна програма
{
    UART_init();                                    //Ініціалізуємо наш UART
    sei();                                          //Глобальний дозвіл переривань
    while (1) {
    }
}

ISR (USART0_RX_vect)                                //Обробник переривання по завершенню читання
        {
                uint8_t value = UDR0;                           //Створюємо беззнакову 8-бітну змінну і записуємо прочитане значення
        if (value == 0x0D){                             //Якщо значення - перенос рядку, то
            UART_transmit_int(function((int32_t) number)); //Викликаємо функцію передачі результату функції
            UART_transmit(0x0D);                        //Викликаємо функцію переносу на інший рядок
            number = 0;                                 //Очищаємо змінну
            sign_flag = 0;                              //Флаг скидаємо в 0
        } else {                                        //Інакше
            if (value == 0x2D) {                         //Якщо значення є знаком мінус
                sign_flag = 1;                              //Встановлюємо флаг знаку
            } else UART_create_int16t(value - 0x30);    //Інакше викликаємо функцію, щоб скласти елементи в одне число
        }
        }