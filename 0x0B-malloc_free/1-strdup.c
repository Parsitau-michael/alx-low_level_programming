#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a string.
 * Return: a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *)malloc(len + 1);

	if (str == NULL)
		return (NULL);
	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}

