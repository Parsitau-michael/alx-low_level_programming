#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: value associated with the element, NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *array;

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array[index];

	if (array != NULL)
	{
		if (strcmp(array->key, key) == 0)
			return array->value;
	}

	return NULL;
}
