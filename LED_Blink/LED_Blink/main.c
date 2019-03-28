#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0xFF;
	PORTB = 0x00;
    
    while (1) 
    {
		PORTB = 0x00;
		_delay_ms(10);
		
		PORTB = 0xFF;
		_delay_ms(10);
    }
	return 0;
}

