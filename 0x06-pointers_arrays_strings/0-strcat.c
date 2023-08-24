#include "main.h"
#include <stddef.h>

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: first string of charcters
 * @src: second string of characters
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *org_dest = dest;

	if (dest == NULL || src == NULL)
	{
	return (NULL);
	}

	while (*dest != '\0')
	{
		dest++;
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
