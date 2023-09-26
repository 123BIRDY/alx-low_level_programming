#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: double pointer to the head node
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ind;
	int data;

	if (*head == NULL)
		return (0);
	ind = *head; /* Store the head node in ind */
	data = ind->n; /* Check the data stored in head node */
	*head = (*head)->next; /* Set the next node the new head node */

	free(ind);
	return (data);
}
