#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: parameter to be checked
 * Return: 1 if positive, -1 if negative, 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
