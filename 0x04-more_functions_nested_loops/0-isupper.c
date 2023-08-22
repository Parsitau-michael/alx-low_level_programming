#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
