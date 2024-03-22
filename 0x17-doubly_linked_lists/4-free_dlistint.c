#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head: a pointer to the first element in the DLL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
