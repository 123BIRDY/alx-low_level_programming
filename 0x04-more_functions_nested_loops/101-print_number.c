#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * Return: 0 when successful
 */

void print_number(int n)
{
	unsigned int dig = n;

	if (n < 0)
	{
		_putchar(45);
		dig = -dig;
	}
	if ((dig / 10) > 0)
		print_number(dig / 10);
	_putchar((dig % 10) + '0');
}
