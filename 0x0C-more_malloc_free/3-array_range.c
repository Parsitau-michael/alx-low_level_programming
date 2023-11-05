#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			ptr[i] = min + i;
		}
	}

	return (ptr);
}
