#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to the first node
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	/* Run through the list and sum all the data (n) */
	while (head)
	{
		/* Sum each node starting from the head to the next node */
		add += head->n;
		head = head->next;
	}
	return (add);
}
