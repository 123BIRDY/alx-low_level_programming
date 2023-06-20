#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: 0 when successful
 */

void print_alphabet_x10(void)
{
	char g;
	int n = 0;

	while (n < 10)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
	n++;

	_putchar('\n');
	}
}
