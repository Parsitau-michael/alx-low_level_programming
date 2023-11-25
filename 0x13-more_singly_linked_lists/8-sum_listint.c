#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: a pointer to the linked list.
 * Return:the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	if (curr == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
