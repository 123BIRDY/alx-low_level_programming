#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to the head node
 * @n: the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
	{
		return (NULL);
	}
	/* Format the new node */
	fresh->n = n;
	/* Make new node the head node */
	fresh->next = *head;
	/* Make head node to point to new node */
	*head = fresh;

	return (fresh);
}
