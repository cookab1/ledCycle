 /*
 * ledCycle.c
 *
 * Created: 1/23/2018 2:33:15 PM
 * Author : cookab1
 */ 

#include <avr/io.h>
#include <util/delay.h>

PORTC = 0x01;
PORTK = 0x

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		PORTC |= 1 << 3; // 
		PORTC &= ~(1 << 3); // 
    }
}

