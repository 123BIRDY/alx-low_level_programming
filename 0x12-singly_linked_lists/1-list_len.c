#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the beginning of the list
 * Return: the number of elements in the pointer
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
