#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to the stdout
 *
 * @c: the character to be written
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
