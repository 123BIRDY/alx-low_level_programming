#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: the first dimension of the integers
 * @height: the second dimension of the array
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL); /* Find invalid inputs */
	}
	dim = (int **) malloc(sizeof(int *) * height);

	if (!dim)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		dim[m] = (int *) malloc(sizeof(int) * width);
		if (dim[m] == NULL)
		{
			/* Free formerly allocated memory, if fails return NULL */
			for (n = 0; n < m; n++)
			{
				free(dim[n]);
			}
			free(dim);
			return (NULL);
		}
		/* Format each element of the dim to 0 */
		for (n = 0; n < width; n++)
		{
			dim[m][n] = 0;
		}
	}
	return (dim);
}
