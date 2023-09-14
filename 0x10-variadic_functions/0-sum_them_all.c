#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of
 * all its parameters.
 *
 * @n: a const int value for the number of args to be passed.
 *
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(lst, n); /* initializes the argument list */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(lst, int); /* get the next argument value */

	va_end(lst); /* Clean up */
	return (sum);
}
