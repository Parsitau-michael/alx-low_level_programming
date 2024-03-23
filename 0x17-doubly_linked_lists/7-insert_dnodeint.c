#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @h: a pointer to the head 
 * @idx: the index of the list where the new node should be added.
 * @n: the integer value to be added to the list.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *next_node = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (next_node != NULL)
	{
		if (count == idx)
		{
			new_node->prev = next_node->prev;
			next_node->prev = new_node;
			new_node->next = next_node;

			if (new_node->prev != NULL)
				new_node->prev->next = new_node;
			else 
				*h = new_node;
		}
		next_node = next_node->next;
		count++;
	}
	return (new_node);
}
