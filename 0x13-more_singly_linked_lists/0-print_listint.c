#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *temp

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return (n);
}
