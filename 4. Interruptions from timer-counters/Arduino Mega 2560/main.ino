#define F_CPU 16000000UL            // вкажемо компілятору частоту

#include <avr/io.h>                //Бібліотека вводу/виводу AVR
#include <util/delay.h>
#include <avr/interrupt.h>            // Бібліотека імен переривань

volatile unsigned long millisCounter = 0;

int main(void) {
    Serial.begin(9600);                        // вивід значення змінної в монітор
    DDRF |= (1 << DDF0);                        // вихід
    TCCR5A = 0;
    TCCR5B |= (1 << WGM52) | (1 << WGM53);        //режим No12 СТС
    TCCR5B |= (1 << CS52);                    // дільник 256
    ICR5 = 625 - 1;                            // переривання виконується раз в 10 000 us
    TIMSK5 |= (1 << OCIE5C);                    //Дозволяемо переривання TIMER5_COMPC_vect
    sei();                                    // Дозволяемо глобальні переривання
    while (1) {
        Serial.println(millisCounter);            // вивід значення змінної в монітор
        _delay_ms(100);
    }
}

ISR(TIMER5_COMPC_vect){                        // обробник переривання по збігу
        millisCounter++;
        PORTF ^= (1<<PORTF0);                    // інвертуємо стан
}
