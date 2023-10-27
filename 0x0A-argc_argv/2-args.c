#include "main.h"

/**
 * main - Entry point
 *
 * @argc: the number of args
 * @argv: an array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
