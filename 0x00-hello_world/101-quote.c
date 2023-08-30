#include <unistd.h>
/**
 *
 *main - Entry point
 *
 *Description: This program prints a specific message to the standard error.
 *
 *Return: Always 1 (indicating an error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" -");
	write(" Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
