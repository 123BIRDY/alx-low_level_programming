#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 * Return: drawn triangle
 */

void print_triangle(int size)
{
	int r, a, e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (e = size - r; e >= 1; e--)
			{
				_putchar(' ');
			}
			for (a = 1; a <= r; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

