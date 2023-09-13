#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 *
 * @name: a pointer to the name being printed to std out
 * @f: a pointer to a function that takes a char argument
 * and returns nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
