#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the linked list of the elements
 * @h: direct list_t list to the pointer
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
