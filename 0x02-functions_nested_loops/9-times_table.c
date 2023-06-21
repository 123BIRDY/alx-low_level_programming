#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: the 9 times table
 */

void times_table(void)
{
	int g, h, i, j, k;

	for (g = 0; g <= 9; g++)
	{
	for (h = 0; h <= 9; h++)
	{
	i = g * h;
	if (i > 9)
	{
		j = i % 10;
		k = (i - j) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(k + '0');
		_putchar(j + '0');
	}
	else
	{
		if (h != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(i + '0');
	}
	}
	_putchar('\n');
	}
}
