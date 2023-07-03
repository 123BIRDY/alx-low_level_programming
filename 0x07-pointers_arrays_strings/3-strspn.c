#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be considered
 * @accept: prefix of the string
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				i++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
