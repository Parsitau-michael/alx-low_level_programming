#include "lists.h"

/**
 * add_dnodeint - a function that inserts a value at the beginning of the DLL
 *
 * @head: a pointer to the head of the list
 * @n: integer value to be added
 * Return: address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/** add data to our new node **/
	new_node->n = n;
	/** make next as head and prev NULL **/
	new_node->prev = NULL;
	new_node->next = *head;

	/** making prev of head be new node **/
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
