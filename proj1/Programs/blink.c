#include "msp.h"
#define red_led BIT5;

int i;

void onedelay()
{
	for(i=0; i<10000; i++);
}
int onemain()
{
	P4->DIR= red_led; // P4.5
	
	while(1)
	{
		P4->OUT ^= red_led; // xor operation
		onedelay();
		
	}
}