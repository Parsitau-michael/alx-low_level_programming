#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * at a given position.
 *
 * @head: a pointer to a pointer to a linked list.
 * @idx:  is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the integer value being added.
 * Return:the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (curr != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = curr->next;
			new_node->n = n;
			return (new_node);
		}
		count++;
		curr = curr->next;
	}
	return (NULL);
}
