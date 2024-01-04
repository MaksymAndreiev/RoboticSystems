#define F_CPU 16000000UL            // вкажемо компілятору частоту

#include <avr/io.h>                //Бібліотека вводу/виводу AVR
#include <util/delay.h>
#include <avr/interrupt.h>            // Бібліотека імен переривань

volatile unsigned long counter = 0;

int main(void) {
    Serial.begin(9600);
    DDRB |= (1 << DDB0);                        // вивід значення змінної в монітор
    TCCR0A = 0;
    TCCR0B |= (1 << CS01) | (1 << CS00);        // дільник 256
    TCCR1B |= (1 << CS11) | (1 << CS10);        // дільник 256
    OCR0A = 24;
    TIMSK0 |= (1 << OCIE0A);            //Дозволяемо переривання TIMER0_COMPC_vect
    TIMSK1 |= (1 << ICIE1);            //Дозволяемо переривання TIMER1_COMPC_vect

    TCCR1B |= (1 << ICES1);            // захоплення по позитивному фронту
    while (1) {                        // вивід значення змінної в монітор
        Serial.println(counter);
        _delay_ms(500);
    }
}

ISR(TIMER0_COMPA_vect){
        PORTB ^= (1 << PORTB0);
        TCNT0 = 0;
}
ISR(TIMER1_CAPT_vect){
        counter = ICR1;
        TCNT1=0;
}