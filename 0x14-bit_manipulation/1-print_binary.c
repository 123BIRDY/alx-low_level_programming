#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to consider
 */

void print_binary(unsigned long int n)
{
	int v = 0;

	/* Get position of the far left 1 in the binary string */
	while ((n >> v) > 1)
	{
		v++;
	}
	/* Print the binary form of the number */
	while (v >= 0)
	{
		if ((n >> v) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		} /* End while loop and move rigth to next bit */
		v--;
	}
}
