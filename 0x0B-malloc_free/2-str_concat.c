#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to cat
 * @s2: second string to cat
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int g, h = 0, leng = 0;
	char *sol;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (g = 0; s1[g] || s2[g]; g++)
	{
		leng++;
	}
	sol = malloc(sizeof(char) * leng); /* Allocate memory for the sol string */

	if (!sol)
		return (NULL); /* Identify failed allocation */
	for (g = 0; s1[g]; g++)
	{
		sol[h++] = s1[g]; /* Move contents of s1 to sol string */
	}
	for (g = 0; s2[g]; g++)
	{
		sol[h++] = s2[g]; /* Move contents of s2 to sol string */
	}
	return (sol);
}
