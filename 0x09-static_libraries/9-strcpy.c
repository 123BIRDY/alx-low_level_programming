#include "main.h"

/**
 * *_strcpy - function that copies string pointed to by src
 * @dest: the destination string
 * @src: the source string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src != '\0')
	{
		*x++ = *src++;
	}
	*x = '\0';
	return (dest);
}
