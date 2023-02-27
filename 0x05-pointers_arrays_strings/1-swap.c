#include "main.h"

/**
 * swap_int - entry point to swap the values of two integers
 * @a: integer variable
 * @b: integer variable
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int digit = *a;
	*a = *b;
	*b = digit;
}


