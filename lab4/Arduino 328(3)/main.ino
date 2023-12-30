#define F_CPU 16000000UL            // вкажемо компілятору частоту

#include <avr/io.h>                //Бібліотека вводу/виводу AVR
#include <util/delay.h>
#include <avr/interrupt.h>            // Бібліотека імен переривань

volatile unsigned long counter = 0;

int main(void) {
    Serial.begin(9600);                        // вивід значення змінної в монітор
    DDRB |= (1 << DDB0);                        // вихід
    //PORTB |= (1<<PORTB0);
    TCCR0B |= (1 << CS01) | (1 << CS00);        // дільник 64 для 8 біт
    TCCR1B |= (1 << CS11) | (1 << CS10);        // дільник 64 для 16 біт
    OCR0A = 24;
    TIMSK0 |= (1 << OCIE0A);                    //Дозволяемо переривання TIMER0_COMPC_vect - збіг
    TIMSK1 |= (1 << ICIE1);                    //Дозволяемо переривання TIMER1_CAPT_vect - захоплення
    TCCR1B |= (1 << ICES1);                    // захоплення по позитивному фронту
    sei();
    while (1) {                                // вивід значення змінної в монітор
        Serial.print("Frequency: ");
        Serial.print(1 / (counter * 4 * 0.000001));
        Serial.println(" Hz");
        _delay_ms(500);
    }
}

ISR(TIMER0_COMPA_vect){                    // обробник переривання по збігу
        PORTB ^= (1 << PORTB0);                    // інвертуємо стан
        TCNT0 = 0;                                // скидаємо лічильник
}

ISR(TIMER1_CAPT_vect){                        // обробник переривання по захопленню
        counter = ICR1;                            // запам'ятовуємо значення в змінну відліку
        TCNT1 = 0;                                // скидаємо лічильник
}