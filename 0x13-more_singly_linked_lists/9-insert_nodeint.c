#include "lists.h"

/**
 * insert_nodeint_at_index - function inserting a new node at a given position
 * @head: double pointer to the head node
 * @idx: the index of the list where the new node should be added, starts at 0
 * @n: the new node to insert
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *fresh;
	listint_t *current = *head;
	/* Where current is present node, fresh is new node, g is a node */

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	/* Set idx at the start of the list (0) and add new node */
	if (idx == 0)
	{
		fresh->next = current;
		*head = fresh;
		return (fresh);
	}
	/* Iterate the node */
	for (g = 0; g < (idx - 1); g++)
	{
		/* Check if current and next nodes are null before inserting */
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	/* Insert new node between current and next node */
	fresh->next = current->next;
	current->next = fresh;

	return (fresh);
}
