#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to the head node
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *tail;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head)
	{
		tail = (*head)->next; /* Store the next node */
		/* Reverse the direction of the pointer */
		(*head)->next = first;
		first = *head;
		/* Set head node to the next */
		*head = tail;
	}
	/* Set the head to the last node to reverse the list */
	*head = first;
	return (*head);
}
