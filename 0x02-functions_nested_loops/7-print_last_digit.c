#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @c: parameter to be checked
 *
 * Return: k when successful
 */

int print_last_digit(int c)
{
	int k;

	k = c % 10;
	if (c < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
