<<<<<<< HEAD
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
=======
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
>>>>>>> 41ccd0e54f964ec32a469ae7cc6cfcfe1987b726
}
