#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t read = 0;

	while (h)
	{
		read++;
		/* Go to the next node */
		h = h->next;
	}
	return (read);
}
