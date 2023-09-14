#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(lst, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(lst);

	printf("\n");
}
