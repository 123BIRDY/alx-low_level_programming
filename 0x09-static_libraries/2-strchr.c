#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string to consider
 * @c: Character to find
 * Return: character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
