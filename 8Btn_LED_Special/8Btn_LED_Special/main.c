#include <avr/io.h>


int main(void)
{
	DDRB = 0xFF;
	PORTB = 0xFF;
	DDRE = 0x00;
	while (1)
	{
		if((PINE&0x01)==0x00) PORTB = 0xF0;
		else if((PINE&0x02)==0x00) PORTB = 0x0F;
		else if((PINE&0x04)==0x00) PORTB = 0xFC;
		else if((PINE&0x08)==0x00) PORTB = 0xF3;
		else if((PINE&0x10)==0x00) PORTB = 0xCF;
		else if((PINE&0x20)==0x00) PORTB = 0x3F;
		else if((PINE&0x40)==0x00) PORTB = 0xAA;
		else if((PINE&0x80)==0x00) PORTB = 0x55;
		else PORTB = 0xFF;
	}
	return 0;
}