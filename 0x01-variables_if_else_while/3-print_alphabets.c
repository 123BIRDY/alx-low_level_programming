#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
