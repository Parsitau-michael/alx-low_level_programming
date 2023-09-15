#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - a function that prints its own opcodes.
 *
 * @argc: the number of command-line arguments passed to the program.
 * @argv: an array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - a program that prints the opcodes of its own main function.
 *
 * @num_bytes: an integer parameter.
 */

void print_opcodes(int num_bytes)
{
	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
			break;
		}
		printf("%02hhx ", main_ptr[i]);
	}
}
