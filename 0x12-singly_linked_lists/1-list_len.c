#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t read_nodes = 0;

	while (h != NULL)
	{
		read_nodes++; /* Increase count for each node */
		h = h->next; /* Move to the next node */
	}
	return (read_nodes);
}
