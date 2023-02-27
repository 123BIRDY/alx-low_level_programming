#include "main.h"

/**
 * rev_string - entry point to reverse a string
 * @s: character integer
 * Return: str
 */

void rev_string(char *s)
{
	int i, v;
	char character;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	v = 0;
	for (i = i - 1; v < i; v++)
	{
		character = s[i];
		s[i] = s[v];
		s[v] = character;
		i--;
	}
}

