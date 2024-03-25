#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @int: the integer whose absolute value is being found
 *
 * @n: an arbitrary integer name
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
