#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to print.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters starting from the end down to index 0 */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}

