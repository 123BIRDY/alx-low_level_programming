#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the array to consider
 * @size: the memory size set to zero
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;
	unsigned int mem_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Measure total size of memory to allocate */
	mem_size = nmemb * size;
	/* Set memory using malloc */
	r = malloc(mem_size);

	if (!r)
		return (NULL);
	/* Set the allocated memory to 0 */
	memset(r, 0, mem_size);
	return (r);
}
