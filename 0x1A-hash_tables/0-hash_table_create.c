#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * size: is the size of the array.
 * Return: a pointer to the newly created hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t) * size);

	return (new_table);
}
