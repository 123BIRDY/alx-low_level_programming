#include "main.h"

/**
 * _puts - entry point to print a string
 * @str: string data type
 * Return: int
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
