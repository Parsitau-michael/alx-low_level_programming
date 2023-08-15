#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
