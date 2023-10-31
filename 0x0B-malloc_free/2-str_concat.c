#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a new allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	size_t l1 = strlen(s1);
	size_t l2 = strlen(s2);
	char *conc = (char *)malloc(l1 + l2 + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (conc == NULL)
		return (NULL);
	strcpy(conc, s1);
	strcat(conc, s2);
	return (conc);
}
