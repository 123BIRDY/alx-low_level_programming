#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and format it
 * @size: the allocated size of the array
 * @c: the character to initialize with
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *len;

	len = malloc(sizeof(char) * size);

	if (size == 0 || len == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		len[m] = c;
	}
	return (len);
}
