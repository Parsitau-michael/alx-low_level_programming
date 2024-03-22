#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - a function that prints the values in a DLL
 *
 * @h: pointer to the head of the DLL
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
