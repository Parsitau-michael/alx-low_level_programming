#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: a pointer to the list list_t.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}

