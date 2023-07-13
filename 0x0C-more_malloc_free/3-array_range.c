#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of integers
 * @max: maximum range of integers
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int d, scale;
	int *p;

	if (min > max)
		return (NULL);
	scale = max - min + 1;
	p = malloc(sizeof(int) * scale);
	if (p == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		p[d] = min++;
	return (p);
}
