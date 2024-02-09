#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: a given integer
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* create a mask with the bit at the specified index set to 1. */
	unsigned long int mask = 1UL << index;

	/* check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* error, index out of bounds */

	/* use & to check if the bit at index is set. */
	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
