#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns linked lists number of elements
 *@h: transverse the linke list type listint_t
 *
 * Return: the nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h;
	}
	return (num_nodes);
}
