#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	PORTB = 0x00;

	int i;
	unsigned int led;
	
	led = 0x01;
	
	while(1)
	{
		PORTB = led;
		_delay_ms(300);
		
		if (led == 0xFF)
		{
			led = 0x01;
			} else {
			led = led >> 1;
		}
	}

	return 0;
}