 /*
 * ledCycle.c
 *
 * Created: 1/23/2018 2:33:15 PM
 * Author : cookab1
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRK = 0xff;
	DDRC = 0x0f;
														
	int trans[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 
					0x7f, 0x6f, 0x77, 0x7c, 0x58, 0x5e, 0x79, 0x71};
		
	int digit[] = {0x07, 0x0b, 0x0d, 0x0e};

    /* Replace with your application code */
    while (1)
    {
		for(int j = 0; j < 4; j++)
		{
			PORTC  = digit[j];
			for(int i = 0; i < 16; i++)
			{
				PORTK = trans[i];
				_delay_ms(250);
				PORTK &= 0;
				_delay_ms(250);
			}
			
		}
	}
}

