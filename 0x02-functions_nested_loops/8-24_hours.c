#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 * Return: time of the day
 */

void jack_bauer(void)
{
	int t, h, o, m;

	for (t = 0; t <= 2; t++)
	{
	for (h = 0; h <= 9; h++)
	{
	if ((t <= 1 && h <= 9) || (t <= 2 && h <= 3))
	{
	for (o = 0; o <= 5; o++)
	{
	for (m = 0; m <= 9; m++)
	{
		_putchar(t + '0');
		_putchar(h + '0');
		_putchar(':');
		_putchar(o + '0');
		_putchar(m + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
