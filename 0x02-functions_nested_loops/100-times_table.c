#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n: parameter of numbers for which time table is generated
 * Return: 0 when successful
 */

void print_times_table(int n)
{
	int fig, mult, res;

	if (n >= 0 && n <= 15)
	{
	for (fig = 0; fig <= n; fig++)
	{
		_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
		_putchar(44);
		_putchar(32);
		res = fig * mult;
	if (res <= 99)
		_putchar(32);
	if (res <= 9)
		_putchar(32);
	if (res >= 100)
	{
		_putchar((res / 100) + '0');
		_putchar(((res / 100)) % 10 + '0');
	}
	else if (res <= 99 && res >= 10)
	{
		_putchar((res / 10) + '0');
	}
	_putchar((res % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
