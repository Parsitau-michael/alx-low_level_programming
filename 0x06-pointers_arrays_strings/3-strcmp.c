#include "main.h"

/**
 *  _strcmp - a function that compares two strings
 *
 * @s1: first string of charcters
 * @s2: second string of characters
 *
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0')
	{
		return (1);
	}
	else if (*s2 != '\0')
	{
		return (-1);
	}

	return (0);
}
