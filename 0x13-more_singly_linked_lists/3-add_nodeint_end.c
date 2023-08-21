#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointers to the head node
 * @n: new node to add at the end of the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *fresh;

	/* Allocate memory to the new node */
	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	/* Initialize the new node */
	fresh->n = n;
	fresh->next = NULL;
	/* If head is null, make new node the head node */
	if (!*head)
	{
		*head = fresh;
	}
	else
	{
		/* Find the last node in the list */
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		/* Add new node to the end of the list */
		current->next = fresh;
	}
	return (fresh);
}
