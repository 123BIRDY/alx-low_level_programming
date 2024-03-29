#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: the destination string to consider
 * @src: the source string to consider
 * @n: Integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	for (; d < n; d++)
	{
		dest[d] = '\0';
	}
	return (dest);
}
