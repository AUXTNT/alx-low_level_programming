#include "lists.h"
#include <stdio.h>

/**
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
}
