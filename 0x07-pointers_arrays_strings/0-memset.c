#include "main.h"

/**
 * _memset - function fills the memory area with constant byte
 * @s: points to the memory area
 * @b: constant byte
 * @n: the number of bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int q;

	for (q = 0; q > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
