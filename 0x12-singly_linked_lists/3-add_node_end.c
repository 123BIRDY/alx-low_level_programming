#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to the head node
 * @str: pointer to the node to add at the end of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh, *now;

	if (head == NULL)
		return (NULL);
	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);
	fresh->str = strdup(str); /* Double the string */
	if (fresh->str == NULL)
	{
		free(fresh);
		return (NULL);
	}
	/* Count the number of chars in the string */
	fresh->len = strlen(str);
	fresh->next = NULL;
	if (*head == NULL)
	{
		*head = fresh; /* Let new node become head */
		return (fresh);
	}
	now = *head;
	while (now->next)
	{
		/* Move through the list to the last node */
		now = now->next;
	}
	/* Add the the new node to the end of the list */
	now->next = fresh;
	return (fresh);
}
