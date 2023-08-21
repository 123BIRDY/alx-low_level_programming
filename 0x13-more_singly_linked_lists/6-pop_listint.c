#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the head node
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *index;
	int data;

	if (!*head)
		return (0);
	/* Stash head node in index */
	index = *head;
	/* Store data in head node */
	data = index->n;
	/* Set next node the new head node */
	*head = (*head)->next;

	free(index);
	return (data);
}
