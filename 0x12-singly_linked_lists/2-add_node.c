#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head node
 * @str: the string to add to the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	int leng;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
	{
		return (NULL);
	}
	fresh->str = strdup(str); /* Copy the string */
	if (fresh->str == NULL)
	{
		free(fresh);
		return (NULL);
	}
	/* Get the number of chars */
	leng = 0;
	while (str[leng])
		leng++;
	/* Let the new node point to the current head */
	fresh->next = *head;
	fresh->len = leng;
	/* Let the head node point to the new node */
	*head = fresh;
	return (fresh);
}
