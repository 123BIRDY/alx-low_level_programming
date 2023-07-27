#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the list
 * @str: pointer to the string to add to the node
 * Return: the address of the new element otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int z = 0;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);
	for (z = 0; str[z] != '\0'; z++)
		;
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = z;
	add->next = *head;
	*head = add;
	return (*head);
}
