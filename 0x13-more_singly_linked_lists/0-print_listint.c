#include "lists.h"
#include <stdio.h>

/**
 * print_listint - all the elements of a listint_t list printed
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%dn", h->h);
		h = h;
		num_nodes++;
	}

	return (num_nodes);
}
