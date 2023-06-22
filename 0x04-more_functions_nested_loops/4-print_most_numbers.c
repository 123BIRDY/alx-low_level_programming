#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, without 2 and 4
 *
 * Return: 0 when successful
 */

void print_most_numbers(void)
{
	int w;

	for (w = 0; w < 10; w++)
	{
	if (!(w == 2 || w == 4))
		_putchar(w + '0');
	}
	_putchar('\n');
}
