#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to the head node
 * Return: if the list is empty, 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
