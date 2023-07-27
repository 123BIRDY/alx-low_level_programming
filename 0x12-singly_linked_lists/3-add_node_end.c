#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the list_t
 * @str: string to add to the list
 * Return: the address of the new element otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (new);
}
