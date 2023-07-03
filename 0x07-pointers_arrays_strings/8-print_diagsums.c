#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array of integers
 * @size: size of the bytes of integers
 * Return: when successful 0
 */

void print_diagsums(int *a, int size)
{
	int add1 = 0;
	int add2 = 0;
	int d;

	for (d = 0; d < size; d++)
	{
		add1 = add1 + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		add2 += a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
