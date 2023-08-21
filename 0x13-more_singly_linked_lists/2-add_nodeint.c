#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head node of the list
 * @n: the new node to add to the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Set memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* Initialize the new node */
	new->n = n;
	/* Set pointer of new to current head */
	new->next = *head;
	/* Point head to the new node */
	*head = new;
	return (new);
}
