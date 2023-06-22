#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the size of the square
 * Return: drawn square
 */

void print_square(int size)
{
	int b, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 1; b <= size; b++)
	{
		_putchar('#');
	for (row = 2; row <= size; row++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
}
