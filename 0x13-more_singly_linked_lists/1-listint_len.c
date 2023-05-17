#include "lists.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t cursor = 0;

    while (h != NULL)
    {
        cursor++;
       	h = h->cursor;
    }

    return (cursor);
=======
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
>>>>>>> 41ccd0e54f964ec32a469ae7cc6cfcfe1987b726
}
