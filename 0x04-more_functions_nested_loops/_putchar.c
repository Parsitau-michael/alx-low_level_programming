#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters to the stdout
 *
 * @c: the character to be printed
 *
 * Return: on success return 1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
