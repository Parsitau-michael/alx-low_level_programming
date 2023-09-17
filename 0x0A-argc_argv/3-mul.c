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
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
