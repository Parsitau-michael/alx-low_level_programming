#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a dogs details
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /** DOG_H **/
