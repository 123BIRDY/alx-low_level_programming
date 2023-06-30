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
	int indx;
	int byte;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (indx = 0; indx < 10; indx++)
		{
			if ((indx + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + indx + byte));
			if ((indx % 2) != 0 && indx != 0)
				printf(" ");
		}
		for (indx = 0; indx < 10; indx++)
		{
			if ((indx + byte) >= size)
				break;
			else if (*(b + indx + byte) >= 31 && *(b + indx + byte) <= 126)
				printf("%c", *(b + indx + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
