#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int count = 0;
	char r = s[0];
	int indx;

	while (s[count] != '\0')
		count++;
	for (indx = 0; indx < count; indx++)
	{
		count--;
		r = s[indx];
		s[indx] = s[count];
		s[count] = r;
	}
}
