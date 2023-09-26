#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *now;

	while (head)
	{
		now = head; /* Make the current node the head node */
		head = head->next;
		free(now); /* Free the now node */
	}
}
