#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 * @n: integer value
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);

	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}

	return (ptr);
}
