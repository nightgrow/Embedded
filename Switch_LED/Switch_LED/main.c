#include <avr/io.h>


int main(void)
{
    DDRB = 0xFF;
	DDRE = 0x00;
	
	PORTB = 0xFF;
	
    while (1) 
    {
		if ((PINE&0x10)==0x00)
			PORTB = 0x7F;
		
		if ((PINE&0x20)==0x00)
		PORTB = 0xFE;
		
		else PORTB = 0xFF;
		
	}
}

