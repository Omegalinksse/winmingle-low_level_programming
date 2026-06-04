#include <stdio.h>
#include <stdlib.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program for printing numbers from 0-9 with the integer data type 
 */

/* entry point for the program */
int main(void)
{

	/* for assigning valuable of integer data type */
    int x = 0;

    /* while loop with tge codition statement */
    while (x < 10)
    {
	   /* putchar fir incrementing the value of x with the ascii function */
	    putchar(48+x);
	    /* function for continious sum to satify tge condition */
            x++;
    }

    /* for printing out a new line */
    putchar('\n');

    /* to return the program value */
	return (0);
}
