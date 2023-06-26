#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int r;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (r = len; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
