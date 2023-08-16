#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number printed in binary form
 */

void print_binary(unsigned long int n)
{
	int c = 0;

	/* Find place of leftmost 1 in the binary string */
	while ((n >> c) > 1)
	{
		c++;
	}
	/* Write the binary form of the number */
	while (c >= 0)
	{
		if ((n >> c) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		/* End the while loop and move to next bit on the right */
		c--;
	}
}
