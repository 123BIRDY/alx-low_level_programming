#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: The minimum integer in the array
 * @max: The maximum integer in the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int s, *ind, size;

	if (min > max)
		return (NULL);
	/* Measure the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	ind = malloc(sizeof(int) * size);

	if (ind == NULL)
	{
		return (NULL);
	}

	for (s = 0; s < size; s++)
	{
		/* Fill the array with values from min to max inclusive */
		ind[s] = min + s;
	}
	return (ind);
}
