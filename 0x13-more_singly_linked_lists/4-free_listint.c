#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: a pointer to thw linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *aux = curr;

		curr = curr->next;
		free(aux);
	}
}
