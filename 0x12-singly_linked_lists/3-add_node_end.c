#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the
 *  end of a list_t list.
 *
 * @head: a pointer to a pointer.
 * @str: a string of chars.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new = malloc(sizeof(list_t));
	int i;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for ( i = 0; str[i]; i++)
	{
		;
	}
	new->len = i;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (*head);
}
