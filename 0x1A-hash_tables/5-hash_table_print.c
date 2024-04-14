#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 *
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];

		while (curr_node != NULL)
		{
			printf("'%s': '%s'", curr_node->key, curr_node->value);
			curr_node = curr_node->next;
			if (curr_node != NULL)
				printf(",");
		}
	}
	printf("}\n");
}
