#include "main.h"

/**
 * argstostr - a function that concatenates all the
 * arguments of your program.
 *
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, total = 0;
	int len, offset = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}

	new_string = (char *)malloc(total + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strcpy(new_string + offset, av[i]);
		offset += len;
		new_string[offset] = '\n';
		offset++;
	}
	new_string[offset] = '\0';

	return (new_string);
}
