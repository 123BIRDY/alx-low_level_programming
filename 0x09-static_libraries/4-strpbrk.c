#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to search
 * @accept: acceptable bytes
 * Return: bytes value
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
