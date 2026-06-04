#include <stdio.h>
#include <stdlib.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program for printing alphabet from z-a	
 */
int main(void)
{
    char x = 'z';
    while (x >= 'a')
    {
	    putchar(x);
            x--;
    }
    putchar('\n');
	return (0);
}
