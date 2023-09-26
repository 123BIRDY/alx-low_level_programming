#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *fresh;

	if (head == NULL)
		return;

	while (*head)
	{
		fresh = (*head)->next; /* Set new node to next node */
		free(*head);
		*head = fresh; /* Go to the next node */
	}
	head = NULL;
}
