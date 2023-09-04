#include "main.h"

/**
 * *_memcpy - function that copies the memory area
 * @dest: the destination string
 * @src: the source string
 * @n: Integer
 * Return: the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sol = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (sol);
}
