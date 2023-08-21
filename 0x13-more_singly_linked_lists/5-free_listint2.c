#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *fresh;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		/* Appropriate fresh to next node */
		fresh = (*head)->next;
		free(*head);
		/* Move to new node */
		*head = fresh;
	}
	head = NULL;
}
