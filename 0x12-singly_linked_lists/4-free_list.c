#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the head node
 */

void free_list(list_t *head)
{
	list_t *now;

	while (head)
	{
		now = head->next;
		free(head->str);
		free(head);
		head = now;
	}
}
