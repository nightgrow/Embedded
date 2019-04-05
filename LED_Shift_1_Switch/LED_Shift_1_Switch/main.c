#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA= 0x00;
	DDRB= 0xff;
	PORTB = 0xfe;
	
	while (1)
	{
		if(!(PINA & 0x01))
		{
			if((PORTB & 0x7f) == 0x7f)
			PORTB = 0xfe;
			else
			PORTB = ((PORTB << 1) | (0x01));
			
			_delay_ms(300);
		}
	}
}

