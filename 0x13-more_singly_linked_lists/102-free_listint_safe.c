#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: double pointer to the head node
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *elem;
	size_t read = 0;
	int ind;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		ind = *h - (*h)->next; /* Set current node to placeholder */
		if (ind > 0)
		{
			elem = (*h)->next;
			free(*h);
			*h = elem;
			read++;
		}
		else
		{
			free(*h);
			*h = NULL;
			read++;
			break;
		}
	}
	*h = NULL;
	return (read);
}
