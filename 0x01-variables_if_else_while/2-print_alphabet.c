#include <stdio.h>
#include <stdlib.h>

/* the entry point of tge program */
int main(void)
{
	/* to assign value a to the valuable x with the data type of character */
    char x = 'a';
    /* the while loop with condition to loop from a to z */
    while (x <= 'z')
    {
	    /* to execute the x value */
	    putchar(x);
	    /* for continious sum through each loop */
            x++;
    }
    /* function to execute the program */
    putchar('\n');
    /* to return the value of the program */
	return (0);
}
