#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long long a = 1;
	unsigned long long b = 2;
	unsigned long long next;

	/* Print the first two numbers */
	printf("%llu, %llu", a, b);

	/* Calculate and print the remaining 48 numbers */
	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf(", %llu", next);
		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}

