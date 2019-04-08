#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRE = 0x00;
	DDRB = 0xFF;
	
	PORTB = 0xFF;
	
	int cnt = 0;
	
	while (1)
	{
		if(!(PINE&(1<<PINE0))) {
			_delay_ms(30);
			cnt++;
			
			if(cnt == 3) {
				PORTB = 0x55;
			}
			
			if(cnt == 6) {
				PORTB = 0xAA;
			}
			
			if(cnt == 9) {
				PORTB = 0xF0;
			}
			
			if(cnt == 12) {
				PORTB = 0x0F;
			}
			
			if(cnt == 12) {
				PORTB = 0x0F;
			}
			
			if(cnt == 15) {
				PORTB = 0xFF;
				
				cnt = 0;
			}
			
			while(!(PINE&0x01)) {
				_delay_ms(30);
			}
		}
	}
}


