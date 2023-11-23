#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	
	DDRB = 0xFF;
	
    while(1)
    {
		PORTB = (1<<PB0);
		_delay_ms(1000);
		PORTB = (1<<PB1);
		_delay_ms(1000);
		PORTB = (1<<PB2);
		_delay_ms(1000);
		PORTB = (1<<PB3);
		_delay_ms(1000);
		PORTB = (1<<PB4);
		_delay_ms(1000);
		PORTB = (1<<PB5);
		_delay_ms(1000);
		PORTB = (1<<PB6);
		_delay_ms(1000);
		PORTB = (1<<PB7);
		_delay_ms(1000);
    }
}