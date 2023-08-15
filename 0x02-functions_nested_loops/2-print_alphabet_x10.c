#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 1; i <= 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
