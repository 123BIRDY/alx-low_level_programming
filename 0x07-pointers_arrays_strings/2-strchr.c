#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be considered
 * @c: character to locate
 * Return: pointer to the first occurrence of the character, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
