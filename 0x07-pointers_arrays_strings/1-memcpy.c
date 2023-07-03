#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int v = n;

	for (; c < v; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
