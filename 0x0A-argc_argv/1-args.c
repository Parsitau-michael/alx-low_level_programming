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

int main(int argc, char __attribute__((unused)) **argv)
{
	int count = 0;

	if (argc > 1)
	{
		while (count < argc - 1)
		{
			count++;
		}
		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", count);
	}
	return (0);
}
