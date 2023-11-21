#include "lists.h"

/**
 * pop_listint - a fun that deletes the head node of a listint_t linked list.
 *
 * @head: a pointer to a pointer to the linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
