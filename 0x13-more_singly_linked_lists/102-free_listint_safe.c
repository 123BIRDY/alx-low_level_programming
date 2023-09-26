#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: double pointer to the head node
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *now = *h, *elem;
	size_t read = 0;

	if (!h || !*h)
		return (read);
	while (now)
	{
		elem = now; /* Set current node to placeholder */
		now = now->next;
		if (now <= now->next)
		{
			*h = NULL;
			read++;
			break;
		}
		/* Move placeholder to next node */
		elem = now->next;
		now->next = NULL;
		free(now);
		now = elem;
		read++;
	}
	*h = NULL;
	return (read);
}
