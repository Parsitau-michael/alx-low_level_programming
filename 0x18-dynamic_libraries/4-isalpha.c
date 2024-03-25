#include "main.h"

/**
 * _isalpha - is a function that checks for lowercase or uppercase characters.
 *
 * @c: the character being checked
 *
 * Return: 1 if c is an alphabet, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
