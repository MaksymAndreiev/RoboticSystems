#define F_CPU 16000000UL // частота - 16MHz

#include <avr/io.h> // Бібліотека вводу/виводу

int main(void) {
    DDRB |= (1 << DDB3);            // PB3=OC2A=D11 як ВИХІД
    DDRD |= (1 << DDD3);            // PD3=OC2B=D3 як ВИХІД

    TCCR2A |= (1 << WGM20);        // встановлюємо режим 5 PWM, Phase Correct
    TCCR2B |= (1 << WGM22);
    TCCR2B |= (1 << CS20);        // дільник 1

    TCCR2A |= (1 << COM2B0) | (1 << COM2B1);    // режим інвертованого ШІМ-сигналу

    OCR2A = 20;                // максимум OCR2A
    OCR2B = 16;                // максимум OCR2B

    while (1) {}; //основна програма
}