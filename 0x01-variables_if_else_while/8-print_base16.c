#include <stdio.h>
#include <stdlib.h>
/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program for printing base 16 
 */

int main(void)
{
    char ch;

    // Initialize to the start of digits
    ch = '0'; 
    while (ch <= '9')
    {
        putchar(ch);
        ch++; // Move to the next character
    }

    // Reset to the start of lowercase hex letters
    ch = 'a'; 
    while (ch <= 'f')
    {
        putchar(ch);
        ch++; // Move to the next character
    }

    // Print a newline at the very end
    putchar('\n');

    return (0);
}
	
