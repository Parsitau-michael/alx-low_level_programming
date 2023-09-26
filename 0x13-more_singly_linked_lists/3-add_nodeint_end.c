#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: a pointer to a pointer to the linked list.
 * @n: the int value to be added.
 * Return: the address of the new element, or NULL if
 * it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new == NULL)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	curr = *head;
	if (curr == NULL)
	{
		return (NULL);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;

	return (new);
}
