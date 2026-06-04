#include <stdio.h>
#include <stdlib.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program for printing out base 16 with a space and comma
 */
int main(void)
{
   char n;
   n = '0';
   // Inside the first loop
   while (n <= '9') 
{
      putchar(n);
      if (n != '9') // Protects '9' from getting a comma
      {
	      putchar(',');
	      putchar(' ');
    }
 n++;
    }

       putchar('\n');
 return (0);
}

