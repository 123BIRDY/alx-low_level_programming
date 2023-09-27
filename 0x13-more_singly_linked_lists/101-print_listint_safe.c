#include "lists.h"

/**
 * print_listint_safe - function that Prints a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now, *safe;
	size_t count = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	/* Move through the linked list */
	now = head;
	while (now)
	{
		/* Print the present node */
		printf("[%p] %d\n", (void *)now, now->n);
		count++;
		/* Break loop if next pointer points to previous node */
		if (now > now->next)
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
	return (count);
}
