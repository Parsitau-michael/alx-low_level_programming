#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 *  of a dlistint_t list.
 *
 * @head: a pointer to the head
 * @n: the data value to be added
 * Return: the address of the new element, NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	/** add the data to the new node **/
	new_node->n = n;
	/** make next NULL **/
	new_node->next = NULL;

	/** for empty list **/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/** for a non empty list **/
	while (last_node->next != NULL)
		last_node = last_node->next;
	/** next of last to new_node **/
	last_node->next = new_node;
	/** prev new_node to last **/
	new_node->prev = last_node;

	return (new_node);
}
