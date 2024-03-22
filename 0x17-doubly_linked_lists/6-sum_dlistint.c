#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 *
 * @head: a pointer to the first element of the list.
 * Return: sum of the list items.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
