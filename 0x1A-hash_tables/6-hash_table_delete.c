#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr_node;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];
		while (curr_node)
		{
			temp = curr_node;
			curr_node = curr_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
