#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 when successful
 */

void more_numbers(void)
{
	int g, n;

	for (g = 0; g <= 9; g++)
	{
	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
