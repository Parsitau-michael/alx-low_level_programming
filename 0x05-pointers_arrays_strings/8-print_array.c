#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: the array of integer values
 * @n: the number of elements of the  array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		return;
	}

	for (i =  0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
