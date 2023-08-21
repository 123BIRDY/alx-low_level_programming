#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		/* Print the current node */
		printf("%d\n", h->n);
		/* Move to the next node */
		h = h->next;
		count++;
	}
	return (count);
}
