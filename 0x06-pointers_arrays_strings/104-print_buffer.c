#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer to be printed
 * @size: the quantity of bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int indx = 0;
	int k, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (indx < size)
	{
		k = size - indx < 10 ? size - indx : 10;
		printf("%08x: ", indx);
		for (m = 0; m < 10; m++)
		{
			if (m < k)
				printf("%02x", *(b + indx + m));
			else
				printf(" ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < k; m++)
		{
			int c = *(b + indx + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		indx += 10;
	}
}
