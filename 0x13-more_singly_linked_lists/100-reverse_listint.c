#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to the first node in the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *apex = NULL;
	listint_t *tail;

	if (!head || !*head)
		return (NULL);
	while (*head)
	{
		/* Saves next node */
		tail = (*head)->next;
		/* Reverse pointer direction */
		(*head)->next = apex;
		/* Set the apex node to the current node */
		apex = *head;
		/* Move head node to the next node */
		*head = tail;
	}
	/* Now set the head to the last node (apex) */
	*head = apex;

	return (*head);
}
