#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
	free(temp);
	head = (head)->next;
	temp = head;
	}

	head = NULL;
}
