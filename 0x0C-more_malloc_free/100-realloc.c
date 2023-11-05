#include "main.h"

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 *
 * @ptr: is a pointer to the memory previously allocated with a call to malloc.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: a pointer to the new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		if (new_size < old_size)
		{
			memcpy(new_ptr, ptr, new_size);
		}
		else
		{
			memcpy(new_ptr, ptr, old_size);
		}

		free(ptr);
	}
	return (new_ptr);
}
