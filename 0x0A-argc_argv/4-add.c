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
	int add = 0;
	int i, j, num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			
			num = atoi(argv[i]);
			
			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			
			add += num;
		}
		printf("%d\n", add);
	}
	return (0);
}
