#include "main.h"
#include <stddef.h>

/**
 * puts_half - a function that prints half of a string,
 *  followed by a new line.
 *
 *  @str: the string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	if (str == NULL)
	{
		return;
	}

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len - 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
