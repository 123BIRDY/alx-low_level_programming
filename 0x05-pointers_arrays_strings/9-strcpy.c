#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}
