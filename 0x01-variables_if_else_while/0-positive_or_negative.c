#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: This program print whether a random numbernis positive, negative or zero
 */

/** entry point of program */
int main(void)
{
/** calling a valuable in interger data type */
int n;

 /** call the srand function with parameter of time used for displaying random number */
srand(time(0));

/** statement of getting negative out of srand random numbers */
n=rand()-RAND_MAX/ 2;

/** if  condition for all postive number */
  if (n>0)
      printf("%i is positive\n",n);

/** else if condition for all negative numbers */
  else if (n<0)
      printf("%i is negative\n",n);

/** else condition for all zero numbers */
  else
      printf("%i is zero\n",n);

/** return value for our program */
	return(0);
}
