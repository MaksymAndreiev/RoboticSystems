#define F_CPU 16000000UL                        // Частота - 16MHz

#include <avr/io.h>                            // Бібліотека вводу/виводу AVR
#include <avr/interrupt.h>                        // Бібліотека імен переривань
#include <util/delay.h>

volatile uint16_t time = 0;                    //такти
volatile bool flag = 1;                            //1 чекаємо натискання, 0 вимірюємо час

int main() {
    Serial.begin(9600);
    DDRD &= ~(1 << DDD0);                        // PCINT16=PD0=D0 на ВХІД
    PORTD |= (1 << PORTD0);                        // підтягуємо до + живлення

    PCICR |= (1 << PCIE2);                        // Дозволяємо переривання групи PCINT2
    // Дозволяємо переривання на пінах PCINT16
    PCMSK2 |= (1 << PCINT16);
    TCCR1B |= (1 << CS12) | (1 << CS10);                // 1024 дільник
    sei();                                        // Дозволяємо глобальні переривання
    while (1) {// Основна програма
        Serial.println(time);
        _delay_ms(1000);
    }
}

// обробник переривання PCINT2
ISR(PCINT2_vect) {
        if (flag && (!(PIND & (1<<PIND0)))){        // якщо кнопка натиснута
            TCNT1 = 0;                                // скидання таймера - починаємо відлік
            flag = 0;
        } else{                                        // екщо не натиснута
            time = TCNT1;                            // записуємо значення таймера - закінчили відлік
            flag = 1;
        }
}

