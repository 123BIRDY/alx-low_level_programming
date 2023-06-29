#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string to take from
 * @dest: string to concatenate to
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n;

	while (dest[m])
	{
		m++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m] = src[n];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
