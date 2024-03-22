#include "lists.h"

/**
 * dlistint_len - a function that returns the length of a LL.
 *
 * @h: aa pointer to the head of the DLL.
 * Return: the number of nodes in the DLL.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
