#define F_CPU 16000000UL 						// Частота - 16MHz
#include <avr/io.h> 							// Бібліотека вводу/виводу AVR
#include <avr/interrupt.h> 						// Бібліотека імен переривань

//volatile int flag2 = 0;
//volatile int flag5 = 0;

int main() {
    DDRF |= (1<<DDF1); 							// Пін A1=PF1 ATmega2560 як ВИХІД
    PORTF &= ~(1<<PORTF1); 						// викл
    DDRE |= (1<<DDE5); 							// Пін D3=PE5 ATmega2560 як ВИХІД
    PORTE |= (1<<PORTE5); 						// викл

    DDRB &= ~((1<<DDB2)|(1<<DDB5)); 			// PCINT5=PB5=D11, PCINT2=PB2=D51 на ВХІД
    PORTB |= (1<<PORTB2)|(1<<PORTB5); 			// підтягуємо до + живлення
    //D11 - кнопка1; D51 - кнопка2

    PCICR |= (1 << PCIE0); 						// Дозволяємо переривання групи PCINT0
    // Дозволяємо переривання на пінах PCINT2=PB2, PCINT5=PB5
    PCMSK0 |= (1 << PCINT2)|(1 << PCINT5);
    sei(); 										// Дозволяємо глобальні переривання
    while(1) {} 								// Основна програма
}
// обробник переривання PCINT0
ISR(PCINT0_vect) {
        if( !(PINB & (1<<PINB2))) PORTF ^= (1<<PORTF1);
        if( !(PINB & (1<<PINB5))) PORTE ^= (1<<PORTE5);
}