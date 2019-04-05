#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0xFF;
	DDRA = 0x00;
	
	PORTB = 0xFF;
	
    while (1) 
    {
		if(!(PINA&0x01)) {
			PORTB ^= (PINB = 0xFF)^(PINB = 0x00);
			_delay_ms(300);
		}
    }
}

