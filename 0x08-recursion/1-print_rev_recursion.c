#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: the character to be printed
 *
 * Return: Always o (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
