#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * Return: 0 when successful
 */

int main(void)

{
	int f;
	int s;

	for (f = 0; f < 9; f++)
	{

	for (s = f + 1; s < 10; s++)

	{
	putchar('0' + (f % 10));
	putchar('0' + (s % 10));

	if (f == 8 && s == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
