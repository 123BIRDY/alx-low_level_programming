#include "main.h"

/**
 * comp_strings - function that checks for a match in two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if strings are identical, otherwise 0
 */

int comp_strings(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (comp_strings(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (comp_strings(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && comp_strings(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - function that compares two strings to check if they are identical
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if they are identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	return (comp_strings(s1, s2));
}
