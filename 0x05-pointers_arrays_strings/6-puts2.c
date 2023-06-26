#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string to be considered
 * Return: string
 */

void puts2(char *str)
{
	int h;
	int e = 0;

	while (str[e] != '\0')
		e++;
	for (h = 0; h < e; h += 2)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
