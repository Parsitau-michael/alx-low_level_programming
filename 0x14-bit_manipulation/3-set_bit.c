#include "main.h"

/**
 * set_bit - a function that sets the value of a bit t0 1 at a given index.
 *
 * @n: a pointer to the integer.
 * @index:is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* create a mask with the bit at the specified index set to 1. */
	unsigned long int mask = 1UL << index;

	/* check if index is within the valid range  */
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	/* use | to set the bit at the index to 1 */
	*n |= mask;

	return (1);
}
