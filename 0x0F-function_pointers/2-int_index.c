#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 *
 * @array: a pointer to an array.
 * @size: size of the array.
 * @cmp: a pointer to a function that takes an int as an argument
 * and returns an int.
 *
 * Return:the index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
