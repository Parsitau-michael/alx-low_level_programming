#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: a pointer to the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *aux =  curr;

		curr = curr->next;
		free(aux);
	}
	*head = NULL;
}
