#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');

	return (0);
}
