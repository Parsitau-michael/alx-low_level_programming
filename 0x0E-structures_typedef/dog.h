#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that takes the dogs info
 *
 * @name:the name of the dog
 * @age: the age of the dog
 * @owner:the owner of the dog
 *
 * Description: created a struct that takes dogs info
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


#endif