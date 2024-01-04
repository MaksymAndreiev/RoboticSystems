#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void UART_init()
{
    UBRR0 = 832;                                            //Налаштовуємо швидкість 2400 Бод
    UCSR0A |= (1<<U2X0);                                    //Швидкість передачі подвійна
    UCSR0B |= (1<<RXEN0) | (1<<TXEN0);                      //Дозволяємо прийом та передачу
}

uint8_t UART_receive()                                    	//Функція для прийому символу
{
    while((UCSR0A & (1<<RXC0)) == 0);                       //Очікування, доки буфер не почне приймати байт
    return UDR0;                                            //Повертаємо вміст регістру UDR0
}

void UART_transmit(uint8_t c)                             	//Функція для передачі символу на монітор
{
    while(!(UCSR0A & (1<<UDRE0)));                          //Доки буфер передачі не порожній, очікуємо
    UDR0 = c;                                               //Записуємо переданий символ в регістр UDR0
}

int main(){
    UART_init();                                            //Налаштовуємо наш UART інтерфейс
    uint8_t sym;
    while(1){
        sym = UART_receive();
        UART_transmit(sym);                      			//Передаю символ, який був зчитаний
        _delay_ms(300);                                     //Затримка
    }
}