#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int d;
	int f;

	for (d = 0; d < n--; d++)
	{
		f = a[d];
		a[d] = a[n];
		a[n] = f;
	}
}
