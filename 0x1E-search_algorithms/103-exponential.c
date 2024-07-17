#include "search_algos.h"

/**
 * exponential_search - a function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm.
 *
 * @array:  is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, i = 1;

	if  (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binary_helper(array, low, high, value));
}

/**
 * binary_helper - a helper function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @low: the starting index of the subarray to search in.
 * @high: the ending index of the subarray to search in.
 * @value: is the value to search for.
 * Return: the first index where value is located.
 */
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
