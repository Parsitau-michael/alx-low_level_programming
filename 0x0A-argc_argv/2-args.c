#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: the number of arguments passed into the main fn.
 * @argv: the arguments passed to the main fn.
 *
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
