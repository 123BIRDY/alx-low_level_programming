#include "lists.h"
#include <stdio.h>

size_t listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_length - function that counts the number of unique
 * nodes in a looped linked list
 * @head: pointer to the head node
 * Return: 0 if the list is not looped
 */

size_t listint_length(const listint_t *head)
{
	const listint_t *link, *list;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	link = head->next;
	list = (head->next)->next;
	while (list)
	{
		if (link == list)
		{
			link = head;
			while (link != list)
			{
				node++;
				link = link->next;
				list = list->next;
			}

			link = link->next;
			while (link != list)
			{
				node++;
				link = link->next;
			}
			return (node);
		}

		link = link->next;
		list = (list->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, ind = 0;

	node = listint_length(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < node; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
