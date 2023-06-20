#include "main.h"

/**
 * main - Function that prints the alphabet, in lowercase
 *
 * Return: 0 when succesful
 */

void print_alphabet(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		_putchar(g);
	}
	_putchar('\n');
}
