#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: parameter of integers to be printed
 * Return: 0 when successful
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}

	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
