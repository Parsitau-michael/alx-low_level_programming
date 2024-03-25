#include "main.h"
#include <stddef.h>

/**
 * *_strncpy - a function that concatenates two strings
 *
 * @dest: first string of charcters
 * @src: second string of characters
 * @n: the number of characters from src it uses
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest;

	if (dest == NULL || src == NULL || n <= 0)
	{
		return (NULL);
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (res);
}
