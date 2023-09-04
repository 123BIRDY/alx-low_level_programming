#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to consider
 * @s2: second string to consider
 * Return: compared value
 */

int _strcmp(char *s1, char *s2)
{
	int f = 0;

	while (s1[f] == s2[f])
	{
		if (s1[f] == '\0')
		{
			return (0);
		}
		f++;
	}
	return (s1[f] - s2[f]);
}
