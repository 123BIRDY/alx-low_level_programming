#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
