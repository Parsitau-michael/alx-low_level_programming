#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: is the first int
 * @b: is the second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
