#include "main.h"
#include <stddef.h>

/**
 * *_strncat - a function that concatenates two strings
 *
 * @dest: first string of charcters
 * @src: second string of characters
 * @n: the number of bytes the function uses from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *org_dest = dest;

	if (dest == NULL || src == NULL || n <= 0)
	{
		return (NULL);
	}
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (org_dest);
}

