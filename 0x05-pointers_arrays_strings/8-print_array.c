#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 * Return: integers printed
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		printf("%d", a[g]);
	if (g < (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
