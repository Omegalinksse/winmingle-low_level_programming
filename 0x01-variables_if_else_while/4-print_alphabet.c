#include <stdio.h>
#include <stdlib.h>
/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program for printing from a-z excluding e and q */

/* the entry point for the program */
int main(void)
{
    char x = 'a';

    /* for while loop with the provided condition */
    while (x <= 'z')
    {
	    /* if condition to exclude e and q from the alphabet */
        if (x != 'e' && x != 'q')

		/* to execute the statement of x */
           putchar(x);
	/* for continious sum to satify the condition */
     x++;
            }

    /* for printing a new line */
     putchar('\n');

     /* to return the value of the program */
     return (0);
}
