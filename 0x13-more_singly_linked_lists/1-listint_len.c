#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the first node of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* Initialize the counter */
	while (h)
	{
		count++;
		/* Move to the next node */
		h = h->next;
	}
	return (count);
}
