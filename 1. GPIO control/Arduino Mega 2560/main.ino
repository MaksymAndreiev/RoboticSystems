#define F_CPU 16000000UL            // Частота - 16MHz

#include <avr/io.h>        // Бібліотека вводу/виводу
#include <util/delay.h>        // Бібліотека затримок

int main(void) {
    DDRD |= (1 << DDD2);    // вихід на D2(PD2)
    DDRB |= (1 << DDB0);    // вихід на D8(B0)

    while (1) {
        PORTD |= (1 << PORTD2);
        PORTB |= (1 << PORTB0);
        _delay_us(1);
        PORTD &= ~(1 << PORTD2);
        PORTB &= ~(1 << PORTB0);
    }
}