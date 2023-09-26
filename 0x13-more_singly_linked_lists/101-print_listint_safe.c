#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now, *safe;
	size_t read = 0;

	if (head == NULL || head->next == NULL)
		return (0);
	now = head;
	while (now)
	{
		printf("[%p] %d\n", (void *)now, now->n);
		read++;
		if (now > now->next) /* If pointer points to former node, break loop */
		{
			now = now->next;
		}
		else
		{
			safe = now->next;
			printf("-> [%p] %d\n", (void *)safe, safe->n);
			break;
		}
	}
	return (read);
}
