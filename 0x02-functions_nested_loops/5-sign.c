#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 * @n: number whose sign is to be found
 *
 * Return: 1 if n is >  zero,0  if n is zero and  -1 if n is < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (0);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
	return (0);
}
