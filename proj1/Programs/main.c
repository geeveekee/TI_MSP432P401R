#include "msp.h"
#include "togglergb.h"
#include <stdio.h>
//prog to toggle 3 led RGB
int main()
{
	P2->DIR = red_led | green_led | blue_led;
	
	while(1)
	{	
		//red led
		toggle(red_led);
		toggle(blue_led);
		toggle(green_led);
	}
}
