#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0xFF;
	PORTB = 0xFF;
    
	return 0;
}