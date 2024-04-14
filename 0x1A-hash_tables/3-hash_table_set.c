#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *curr_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Compute the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Create a node for key:value pairs */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	curr_node = ht->array[index];
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			curr_node->value = strdup(value);
			if (curr_node->value == NULL)
				return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}
	
	/* handle collisions */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
