#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0 when succefull
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
