#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @head: a pointer to the first element on the list.
 * @index: index of the item to be returned
 * Return: item at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
