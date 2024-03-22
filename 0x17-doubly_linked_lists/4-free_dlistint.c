#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head: a pointer to the first element in the DLL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	dlistint_t *next_node;

	while (curr_node)
	{
		next_node =curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}
}
