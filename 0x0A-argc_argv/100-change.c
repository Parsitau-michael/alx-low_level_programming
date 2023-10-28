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
	int num, i, numcoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			numcoins++;
		}
	}

	printf("%d\n", numcoins);
	return (0);
}
