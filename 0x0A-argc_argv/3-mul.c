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
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", prod);
	return (0);
}
