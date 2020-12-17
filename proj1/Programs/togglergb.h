//turn on and off led one by one
#include "msp.h"
#include <stdio.h>

//led RGB on P2.0, 2.1, 2.2
#define red_led BIT0
#define green_led BIT1
#define blue_led BIT2


void delay()
{
	int i;
	for(i=0; i<10000; i++);
}

void toggle(int colour)
{
	P2 -> OUT ^= colour;
	delay();
}
