#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description:This program prints the last digit of a random number 
 */

/** enrty point of program */
int main(void)
{
/** call integer valuable of n */
   int n;

/** call integer valuable of l_digit */
   int l_digit;

/** function for displaying random numbers */
   srand(time(0));

/** statement for getting negative random number */
     n = rand() - RAND_MAX / 2;

/** logical statement for getting the last number of a number */
     l_digit = n % 10;

/** conditional statement for last number greater than 5 */
   if (l_digit > 5)
	   printf("last digit of %i is %i and is greater than 5\n", n, l_digit);

/** conditional statement for last number equal to zero */
   else if (l_digit == 5)
	   printf("Last digit of %i is %i and is equal to zero\n", n, l_digit);

/** conditional statement fir last number less than 6 and not 0 */
   else if (l_digit > 0)
	   printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_digit);

/* return value of the program */
return (0);
}

