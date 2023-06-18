#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int com;

	for (com = 0; com < 10; com++)
	{
		putchar('0' + com);
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
