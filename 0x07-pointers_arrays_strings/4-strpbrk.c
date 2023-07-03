#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string
 * @s: string to be considered
 * @accept: second string to be considered
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return ('\0');
}
