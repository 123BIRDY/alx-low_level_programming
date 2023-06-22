#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: drawn line
 */

void print_line(int n)
{
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (s = 1; s <= n; s++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
