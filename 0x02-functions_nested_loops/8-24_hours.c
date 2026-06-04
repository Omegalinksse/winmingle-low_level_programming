#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Print tens and units for hour */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			/* Print tens and units for minute */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

