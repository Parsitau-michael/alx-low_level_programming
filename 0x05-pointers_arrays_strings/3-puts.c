#include "main.h"
#include <stddef.h>
/**
 * _puts - a function that prints a string, followed
 *  by a new line, to stdout
 *
 *  @str: the string to be printed
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
