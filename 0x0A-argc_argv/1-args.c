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

	(void)argv;
	for (i = 1; i <= argc; i++)
	{}
	printf("%d\n", (argc - 1));
	return (0);
}
