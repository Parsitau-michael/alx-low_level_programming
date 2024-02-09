#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	char curr;

	if (b == NULL)
		return (0);

	while ((curr = *b++) != '\0')
	{
		if (curr != '0' && curr != '1')
			return (0);
		res = res * 2 + (curr - '0');
	}

	return (res);
}
