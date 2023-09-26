#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; m < index; m++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
