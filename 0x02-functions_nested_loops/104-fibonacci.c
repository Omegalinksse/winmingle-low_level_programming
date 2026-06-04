#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned int a1 = 0, a2 = 1, b1 = 0, b2 = 2;
	unsigned int next1, next2, carry;
	unsigned int limit = 1000000000;

	printf("1, 2");
	for (count = 3; count <= 98; count++)
	{
		/* Calculate next number: (a1, a2) + (b1, b2) */
		next1 = a1 + b1;

