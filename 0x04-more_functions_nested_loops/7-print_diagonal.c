#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0 when successful
 */

void print_diagonal(int n)
{
	int d, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (d = 1; d <= n; d++)
	{
	for (a = 1; a < d; a++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
