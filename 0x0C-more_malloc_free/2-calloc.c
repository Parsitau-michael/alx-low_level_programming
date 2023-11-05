#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements.
 * @size: the size in bytes.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
