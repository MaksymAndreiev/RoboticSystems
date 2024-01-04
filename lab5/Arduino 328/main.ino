#define F_CPU 16000000UL                            // Частота - 16MHz

#include <avr/io.h>                                // Бібліотека вводу/виводу AVR
#include <avr/interrupt.h>                            // Бібліотека імен переривань

volatile int pressCount = 0;

int main() {
    DDRC |= (1 << DDC0);                                // Пін A0=PC0 ATmega328 як ВИХІД
    PORTC |= (1 << PORTC0);                            // викл
    DDRD |= (1 << DDD3);                                // Пін D3=PD3 ATmega328 як ВИХІД
    PORTD |= (1 << PORTD3);                            // викл
    DDRB |= (1 << DDB0);                                // Пін D8=PB0 ATmega328 як ВИХІД
    PORTB |= (1 << PORTB0);                            // викл

    DDRD &= ~(1 << DDD2);                            // INT0=PD2 на ВХІД
    PORTD |= (1 << PORTD2);                            // підтягуємо до + живлення

    EICRA |= (1
            << ISC01);                            // зміна сигналу по негативному фронту, тому що якщо натиснута, стає 0
    EIMSK |= (1 << INT0);
    sei();                                            // Дозволяємо глобальні переривання
    while (1) {}                                    // Основна програма
}

// обробник переривання INT0
ISR(INT0_vect) {
        pressCount++;                                    // рахую натиснення
        switch (pressCount){
            case 1:
                PORTC &= ~(1 << PORTC0);                    // ввімкнути світлодіод
            PORTD |= (1 << PORTD3);                    // вимикнути світлодіод
            PORTB |= (1 << PORTB0);
            break;
            case 3:
                PORTC |= (1 << PORTC0);
            PORTD &= ~(1 << PORTD3);
            PORTB |= (1 << PORTB0);
            break;
            case 5:
                PORTC |= (1 << PORTC0);
            PORTD |= (1 << PORTD3);
            PORTB &= ~(1 << PORTB0);
            break;
            case 7:
                PORTC |= (1 << PORTC0);
            PORTD |= (1 << PORTD3);
            PORTB |= (1 << PORTB0);
            pressCount = -1;                            //	 скидаємо лічильник
            break;
        }
}