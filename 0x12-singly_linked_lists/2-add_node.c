#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 *
 * @head: a pointer to a pointer that points to the linked list.
 * @str: a pointer to a string of characters.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	int ln = 0;

	/* Allocation failed */
	if (ptr == NULL)
		return (NULL);
	while (str[ln])
	{
		ln++;
	}

	ptr->len = ln;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
