#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: Character
 * @src: Character
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
