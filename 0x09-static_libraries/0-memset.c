#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to address of the memory
 * @b: the value desired
 * @n: the number of bytes to change
 * Return: value for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *f = s;

	while (n-- > 0)
	{
		*f++ = b;
	}
	return (s);
}
