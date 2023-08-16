#include "main.h"

/**
 * jack_bauer -  prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Retun: Always 0 (success)
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 24; i++)
	{
		_putchar(i);
		for (j = 0; j <= 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
