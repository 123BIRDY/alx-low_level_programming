#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declaring variable g as the node */
	unsigned int g;

	/* Run through the list until index or end of list is reached */
	for (g = 0; g < index; g++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
