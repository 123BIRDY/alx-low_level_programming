#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array to be allocated memory
 * @size: allocated memory size
 * Return: allocated memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int q;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (q = 0; q < (nmemb * size); q++)
		m[q] = 0;
	return (m);
}
