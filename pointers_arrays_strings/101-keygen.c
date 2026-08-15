#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *        The sum of ASCII values of the password must equal 2772.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	char rand_char;

	/* Seed the pseudo-random number generator using current time */
	srand(time(NULL));

	/* Generate random printable characters until sum reaches near 2772 */
	while (sum < (2772 - 122))
	{
		/* Printable ASCII characters range roughly from 33 ('!') to 126 ('~') */
		rand_char = (rand() % 94) + 33;
		putchar(rand_char);
		sum += rand_char;
	}

	/* Print the final character that completes the sum precisely to 2772 */
	putchar(2772 - sum);

	return (0);
}

