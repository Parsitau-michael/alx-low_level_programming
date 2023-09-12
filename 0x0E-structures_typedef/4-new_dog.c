#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - function to calculate the length of a string.
 *
 * @str: the string whose length is to be calculated.
 *
 * Return: length of the string.
 */

int str_len(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_cpy - function to copy a string.
 *
 * @dest: the destination of the string being copied.
 * @src: the source of the string being copied.
 *
 */
void str_cpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}


/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 *
 * Return: NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = str_len(name);
	int  owner_len = str_len(owner);

	/* Allocate memory for the new dog struct */
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	/* check if memory allocation was successful */
	if (newDog == NULL)
	{
		exit(1);
	}

	/* Allocate memory for name and owner */
	newDog->name = (char *)malloc(name_len + 1);
	newDog->owner = (char *)malloc(owner_len + 1);

	/* check if mem alloc for name and owner was successful */
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		exit(1);
	}

	/* Copy the name, age, and owner into the new dog structure */
	str_cpy(newDog->name, name);
	newDog->age = age;
	str_cpy(newDog->owner, owner);

	return (newDog);
}
