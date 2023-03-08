#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: parameter variable
 * @accept: parameter variable
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
