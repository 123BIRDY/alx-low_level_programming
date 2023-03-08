#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination variable
 * @src: source variable
 * @n: number of characters
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ans = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ans);
}
