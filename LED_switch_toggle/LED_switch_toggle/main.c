#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x0C;
	PORTB = 0xFF;

	
    while (1) 
    {
		if(!(PINB&0x01)) {
			PORTB ^= (PINB = 0x04)^(PINB = 0x08);
			_delay_ms(300);
		}
    }
}

