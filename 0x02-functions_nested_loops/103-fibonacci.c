#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 * not exceeding 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long a = 1;
	unsigned long long b = 2;
	unsigned long long next;
	unsigned long long sum = 0;

	/* The first even number is 2 */
	sum = b;

	while (1)
	{
		next = a + b;
		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		a = b;
		b = next;
	}

	printf("%llu\n", sum);

	return (0);
}

