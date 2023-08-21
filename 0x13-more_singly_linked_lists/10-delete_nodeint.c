#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: double pointer to the first node in the list
 * @index: the index of the node that should be deleted, starts at 0
 * Return: if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int g; /* Where g is the node */
	listint_t *temp, *current;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* Check node before it is removed */
	current = *head;
	for (g = 0; g < (index - 1); g++)
	{
		/* Check if index is out of range */
		if (!current->next)
			return (-1);
		current = current->next;
	}
	/* Delete the node at index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
