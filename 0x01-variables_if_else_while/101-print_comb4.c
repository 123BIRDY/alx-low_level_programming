#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: 0 when successful
 */

int main(void)
{
	int f;
	int s;
	int t;

	for (f = 0; f <= 8; f++)
	{

	for (s = f + 1; s <= 9; s++)
	{

	for (t = s + 1; t < 10; t++)
	{
	putchar('0' + (f % 10));
	putchar('0' + (s % 10));
	putchar('0' + (t % 10));

	if (f == 7 && s == 8 && t == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
