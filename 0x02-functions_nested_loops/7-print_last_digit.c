#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @c: the Parameter to be checked
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int fin;

	fin = c % 10;
	if (fin < 0)
	{
		fin = fin * -1;
	}
	_putchar(fin + '0');
	return (fin);
}
