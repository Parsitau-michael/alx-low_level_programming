#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 *  node at a given position.
 *
 * @head: a pointer to a pointer to the linked list.
 * @idx:  is the index of the list where the new node should be added.
 * Index starts at 0
 * @n:the new value to be added.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}

		i++;
		ptr = ptr->next;
	}

	return (NULL);
}
