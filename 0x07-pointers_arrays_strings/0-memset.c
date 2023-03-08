#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory area
 * @b: characters of the memory
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
