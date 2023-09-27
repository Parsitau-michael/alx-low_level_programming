#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: a pointer to  a pointer to the linked list.
 * @index:  is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (curr != NULL && i < index)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
