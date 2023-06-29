#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: value of int
 */

int _strcmp(char *s1, char *s2)
{
	int h = 0;

	while (s1[h] != '\0' && s2[h] != '\0')
	{
		if (s1[h] != s2[h])
		{
			return (s1[h] - s2[h]);
		}
		h++;
	}
	return (0);
}
