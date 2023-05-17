#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node to be added at the beginning of a linked list
 * @head: the list_t list should have double pointer
 * @str: add a new string in the node
 * Return: the new element address, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
