#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 *  to flip to get from one number to another.
 *
 *  @n: the first given integer.
 *  @m: another given integer.
 *  Return: the number of bits you'll need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m; /* XOR to find differing bits*/
	unsigned int count = 0;

	/* count number of set bits in the XOR res */
	while (xor_res)
	{
		count += xor_res & 1; /* check rightmost bit*/
		xor_res >>= 1; /* rightshift to examine next bi */
	}

	return (count);
}
