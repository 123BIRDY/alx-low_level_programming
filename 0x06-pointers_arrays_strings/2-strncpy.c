#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination to copy string to
 * @src: source to copy string from
 * @n: data limit to copy
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int v = 0;

	while (src[v])
	{
		v++;
	}
	while (c < n && src[c])
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
