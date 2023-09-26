#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: double pointer to the head node
 * @idx: the index of the list where the new node should be added
 * @n: the new node to add
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh;
	listint_t *now = *head;
	unsigned int a;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	if (idx == 0)
	{
		fresh->next = now;
		*head = fresh;
		return (fresh);
	}
	for (a = 0; a < (idx - 1); a++)
	{
		if (now == NULL || now->next == NULL)
			return (NULL);
		now = now->next;
	}
	fresh->next = now->next;
	now->next = fresh;
	return (fresh);
}
