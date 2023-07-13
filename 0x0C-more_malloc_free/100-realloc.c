#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @ptr: pointer to the memory previously allocated
 * @new_size: the new size, in bytes of the new memory block
 * Return: newly allocated memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int m;
	char *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (m = 0; m < old_size && m < new_size; m++)
	{
		new[m] = ((char *) ptr)[m];
	}
	free(ptr);
	return (new);
}
