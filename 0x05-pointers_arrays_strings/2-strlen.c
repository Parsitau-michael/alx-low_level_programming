#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the string whose length is counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
