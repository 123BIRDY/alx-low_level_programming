#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	char hex;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
