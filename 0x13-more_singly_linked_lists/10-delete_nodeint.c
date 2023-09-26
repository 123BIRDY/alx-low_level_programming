#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: double pointer to the head node
 * @index: the index at which the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lit, *now;
	unsigned int c;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		lit = *head;
		*head = (*head)->next;
		free(lit);
		return (1);
	}
	now = *head;
	for (c = 0; c < (index - 1); c++)
	{
		if (now->next == NULL)
			return (-1);
		now = now->next;
	}
	/* Delete the node at index */
	lit = now->next;
	now->next = lit->next;
	free(lit);

	return (1);
}
