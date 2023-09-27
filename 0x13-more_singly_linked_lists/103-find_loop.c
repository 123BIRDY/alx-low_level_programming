#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the head node
 * Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *begin = head;
	listint_t *close = head;

	if (head == NULL)
		return (NULL);
	while (begin && close && close->next)
	{
		close = close->next->next;
		begin = begin->next;
		if (close == begin)
		{
			begin = head;
			while (begin != close)
			{
				begin = begin->next;
				close = close->next;
			}
			return (close);
		}
	}
	return (NULL);
}
