#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: double pointer to the head node
 * @n: the new node to add
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *now;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	/* Format the new node */
	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		/* If head is null, let new node be head */
		*head = fresh;
	}
	else
	{
		now = *head; /* Find ther last node in the list */
		while (now->next)
		{
			now = now->next;
		}
		/* Add new node to the end of the list */
		now->next = fresh;
	}
	return (fresh);
}
