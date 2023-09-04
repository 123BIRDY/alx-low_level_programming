#include "main.h"

/**
 * _puts - function that prints a string to standard output
 * @str: String data type
 * Return: string printed
 */

void _puts(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		_putchar(str[g]);
		g++;
	}
	_putchar('\n');
}
