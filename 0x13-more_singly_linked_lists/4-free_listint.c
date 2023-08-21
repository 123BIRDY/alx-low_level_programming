#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head node in the leis
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		/* Set the current variable to head node */
		current = head;
		head = head->next;
		/* Free the current node */
		free(current);
	}
}
