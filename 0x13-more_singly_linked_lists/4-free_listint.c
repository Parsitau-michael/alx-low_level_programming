#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head:  a pointer to listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	curr = head;
	while (curr != NULL)
	{
		listint_t *del = curr;

		curr = curr->next;
		free(del);
	}

}
