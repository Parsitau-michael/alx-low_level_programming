#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: pointer to a string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i = strlen(s);

	return (is_pal_rec(s, 0, i - 1));
}

/**
 * is_pal_rec - checks the string
 *
 * @s: the string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if the string is palindrome
 */
int is_pal_rec(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (is_pal_rec(s, start + 1, end - 1));
}
