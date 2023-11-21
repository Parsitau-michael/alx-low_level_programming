#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list.
 *
 * @head: a pointer to the list.
 * @n: an inter value being added.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL)
		exit(1);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return (new_node);
}
