#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRE = 0x00;
	DDRB = 0xFF;
	
	PORTB = 0xFF;
	
    while (1) 
    {
		if(!(PINE & 0x01))
		{
			if((PORTB & 0x7f) == 0x7f)
			PORTB = 0xfe;
			else
			PORTB = ((PORTB << 1) | (0x01));
			
			_delay_ms(300);
		}
		
		if(!(PINE & 0x02))
		{
			if((PORTB & 0xFE) == 0xFE)
			PORTB = 0x7F;
			else
			PORTB = ((PORTB >> 1) | (0x80));
			
			_delay_ms(300);
		}
    }
}

