#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate from
 * @n: the number of bytes to use from src
 * Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int q = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (q < n && src[q] != '\0')
	{
		dest[m] = src[q];
		m++;
		q++;
	}
	dest[m] = '\0';
	return (dest);
}
