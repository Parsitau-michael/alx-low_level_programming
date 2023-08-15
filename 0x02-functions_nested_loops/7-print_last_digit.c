#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 *@n: the number being checked.
 *
 *@l: the computed last digit.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n = -n;
	}

	l = n % 10;
	return (l);
}
