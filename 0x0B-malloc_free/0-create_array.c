#include "main.h"
#include <stdlib.h>

/**
 * create_array - let an array of chars and initializes it with a specific char
 * @size: the array size
 * @c: characters to fill an array
 * Return: pointer to the array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int g;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);
	for (g = 0; g < size; g++)
		a[g] = c;
	return (a);
}
