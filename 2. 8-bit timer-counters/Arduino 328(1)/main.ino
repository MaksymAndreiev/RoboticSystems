#define F_CPU 16000000UL // частота - 16MHz

#include <avr/io.h> // Бібліотека вводу/виводу

int main(void) {
    DDRD |= (1 << DDD6);        // PD6=OC0A=D6 як ВИХІД
    DDRD |= (1 << DDD5);        // PD5=OC0B=D5 як ВИХІД

    PORTD |= (1 << PORTD5) | (1 << PORTD6);
    TCCR0B |= (1 << CS00);    // дільник 1
    TCCR0A |= (1 << COM0A0);    //переключення OC0A при збігу OCR0A=TCNT0
    OCR0A = 250;            // максимум OCR0A
    TCCR0A |= (1 << COM0B0);    //переключення OC0B при збігу OCR0B=TCNT0
    OCR0B = 30;            // максимум OCR0B

    while (1) {}; //основна програма
}