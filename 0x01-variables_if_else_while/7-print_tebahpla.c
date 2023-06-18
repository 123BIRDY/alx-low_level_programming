#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: 0 when successful
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');

	return (0);
}
