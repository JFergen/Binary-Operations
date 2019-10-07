#include "main.h"

void clz (unsigned int val)
{
        int i;
	//To count leading zeros
	//Take compliment of val (which is user input) 
	//Shift bits to the right i times
	//Use bitwise And to see if bit is one or zero
	//Since the compliment was taken, each bit will be flipped, the And operation will return 1 if there is a leading zero
	//The loop will terminate when the And operation returns 0
	//The final clz value ends up being 31 - i
        for (i = 31; (~val >> i) & 1; i--);
        printf("The number of leading zeroes in %d is %d\n",val, 31 - i);
}

