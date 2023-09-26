#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t read = 0;

	while (h)
	{
		printf("%d\n", h->n); /* Print the current node */
		/* Go to the next node */
		h = h->next;
		read++;
	}
	return (read);
}
