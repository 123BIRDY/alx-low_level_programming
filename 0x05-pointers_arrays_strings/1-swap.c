#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
