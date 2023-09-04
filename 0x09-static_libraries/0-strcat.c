#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *w = dest;

	while (*w != '\0')
	{
		w++;
	}
	while (*src != '\0')
	{
		*w = *src;
		w++;
		src++;
	}
	*w = '\0';
	return (dest);
}
