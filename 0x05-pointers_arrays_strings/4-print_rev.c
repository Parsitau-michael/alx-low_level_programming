#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *  followed by a new line
 *
 *  @s: the character to be typed in reverse
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
