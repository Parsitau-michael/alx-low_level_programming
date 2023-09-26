#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 *
 * @head: a pointer to a pointer to the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *del = curr;

		curr = curr->next;
		free(del);
	}
	*head = NULL;
}
