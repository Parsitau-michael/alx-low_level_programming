#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *  of a listint_t linked list.
 *
 * @head: a pointer to a pointer to the linked list.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	data = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (data);
}
