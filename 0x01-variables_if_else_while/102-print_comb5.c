#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 <= 98; dig1++)
	{

	for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
	{
		putchar('0' + (dig1 / 10));
		putchar('0' + (dig1 % 10));
		putchar(' ');
		putchar('0' + (dig2 / 10));
		putchar('0' + (dig2 % 10));

	if (dig1 == 98 && dig2 == 99)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
