#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	char i = 0;
	
	DDRB = 0xFF;
	PORTB = 0xFF;
	
	while (1)
	{
		i -= 1;
		PORTB = i;
		
		_delay_ms(500);
		
		if (PORTB = 0x01)
		{
			PORTB = 0xFF;
		}
	}
}



