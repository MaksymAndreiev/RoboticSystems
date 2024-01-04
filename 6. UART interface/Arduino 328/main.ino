#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/interrupt.h>

void UART_init() {
    UBRR0 = 25;                                    // Швидкість передачі 38400 Бод
    UCSR0B |= (1 << RXCIE0);                            // Дозволяємо переривання по завершенню прийому
    UCSR0B |= (1 << RXEN0) | (1 << TXEN0);                // Дозволяємо прийом та передачу
}

void UINT_transmit(uint8_t c)                    // Функція для передачі символу на монітор
{
    while (!(UCSR0A & (1 << UDRE0)));                    // Чекаємо поки буфер передачі не порожній
    UDR0 = c;                                        // Записуємо переданий символ в регістр UDR0
}

int main() {
    UART_init();                                    // Налаштовуємо наш UART інтерфейс
    sei();                                            // Дозволяємо глобальні переривання
    while (1) {}
}

ISR(USART_RX_vect)                                // Обробник переривання по завершенню прийому
        {
                uint8_t c = UDR0;                                // Записуємо в змінну значення приймального буфера
        UINT_transmit(c);                                // Відправляємо символ в монітор порту
        }

