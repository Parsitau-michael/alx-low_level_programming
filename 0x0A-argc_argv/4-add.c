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
	int a, b, add;

	if (argc < 2)
	{
		printf("0");
	}

	a = atoi(argv[2]);
	b = atoi(argv[3]);

	if (!(a > '0' && a <= '9') || !(b > '0' && b <= '9'))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		add = a + b;
		printf("%d\n", add);
	}
	return (0);
}
