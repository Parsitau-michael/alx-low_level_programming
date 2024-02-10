#include "main.h"

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 *
 * @n: a pointer to an integer.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* create a mask with the bit at the specified index set to 0. */
	unsigned long int mask = ~(1UL << index);

	/* check if the index is valid  */
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1); /* Error, invalid index or null pointer. */

	/* use & to set bit at index to 0. */
	*n &= mask;

	return (1);
}
