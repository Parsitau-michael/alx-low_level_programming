#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 *
 * @n: thet integer to be converted into binary.
 */
void print_binary(unsigned long int n)
{
	/* mask generation */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/* flag to track leading zeros */
	int l_zeros = 1;

	/* iterating through each bit position */
	while (mask > 0)
	{
		/* Use & to check if the current bit is set */
		if (n & mask)
		{
			/* setting the flag to false,first '1' encountered. */
			l_zeros = 0;
			_putchar('1');
		}
		else if (!l_zeros)
		{
			/* print '0' only after first '1' is encountered. */
			_putchar('0');
		}

		mask >>= 1;
	}

	if (l_zeros)
		_putchar('0');

}
