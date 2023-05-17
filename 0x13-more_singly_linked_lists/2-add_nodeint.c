#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - at the beginning of a listint_t list, adds a new node
 * @head: point the head of the list to the pointer
 * @n: store the data in the new node of the integer value
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
