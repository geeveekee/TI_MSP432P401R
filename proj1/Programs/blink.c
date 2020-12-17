#include "msp.h"

int i;
int main()
{
	P4->DIR= BIT5; // output port4.5
	
	while(1)
	{
		P4->OUT ^= BIT5; // xor operation
		for(i=100000; i>0; i--);
		
		//P1->OUT = BIT0; 
		//for(i=100000; i>0; i--);
		//P1->OUT = ~BIT0;
		//for(i=100000; i>0; i--);

	}
}