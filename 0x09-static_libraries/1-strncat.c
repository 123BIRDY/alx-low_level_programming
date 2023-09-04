#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: Integer to consider
 * Return: 0 when successful
 */

char *_strncat(char *dest, char *src, int n)
{
	char *b = dest;

	/* Find the end of dest */
	while (*b != '\0')
	{
		b++;
	}
	/* Append up to n bytes from src */
	while (*src != '\0' && n-- > 0)
	{
		*b++ = *src++;
	}
	/* Add a null terminator to dest */
	*b = '\0';
	return (dest);
}
