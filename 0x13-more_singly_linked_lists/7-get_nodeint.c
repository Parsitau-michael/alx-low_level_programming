#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 *
 * @head: a pointer to the linked list.
 * @index: is the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count = 0;

	while (curr != NULL)
	{
		if (count == index)
		{
			return (curr);
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
