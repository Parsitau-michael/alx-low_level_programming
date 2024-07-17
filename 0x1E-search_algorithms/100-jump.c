#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size:  is the number of elements in array.
 * @value:  is the value to search for.
 * Return: the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, left = 0;
	size_t right = 0;
	size_t jump = sqrt(size);

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);

		right = fmin(size - 1, left + jump);
		if (array[left] <= value && array[right] >= value)
			break;
		left += jump;
	}

	if (left >= size || array[left] > value)
		return (-1);

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	right = fmin(size - 1, right);

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
