#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int i = 0;
	
    DDRB = 0xFF;
	PORTB = 0x00;
	
	
	
    while (1) 
    {
		i = i + 1;
		PORTB = i;
		
		_delay_ms(100);
    }
}

