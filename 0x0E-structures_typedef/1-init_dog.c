#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 *
 * @d: Pointer to a struct dog to be initialized.
 * @name: Pointer to a string for the dog's name.
 * @age: The age of the dog
 * @owner: Pointer to a string for the dog's owner's name.
 *
 * Description: This function initializes a struct dog with the given
 * name, age, and owner. It allocates memory for the name and owner strings.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

