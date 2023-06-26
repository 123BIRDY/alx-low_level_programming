#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to be considered
 * Return: string in half
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
		if (len % 2 == 1)
		{
			n = (len - 1) / 2;
			n += 1;
		}
		else
			n = len / 2;
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
