#include "main.h"
#include <stddef.h>

/**
 * *_strcpy - a function that copies the string pointed
 *  to by src, including the terminating null byte (\0),
 *   to the buffer pointed to by dest.
 *
 *   @dest: the string being copied to
 *   @src: the string to be copied
 *
 *   Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *org_dest = dest;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (org_dest);
}

