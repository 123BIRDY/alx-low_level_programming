#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function prints a pointer to a 2 dimensional array of integers
 * @width: the width of array
 * @height: the height of array
 * Return: pointer to integers, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **a, m, n;
	int leng = width * height;

	if (leng <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		a[m] = malloc(sizeof(int) * width);
		if (a[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(a[m]);
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			a[m][n] = 0;
	return (a);
}
