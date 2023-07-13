#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: length of string
 * Return: newly allocated memory space, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int g, k, h;

	if (s1 == NULL)
	{
		g = 0;
	}
	else
	{
		for (g = 0; s1[g]; ++g)
			;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s2[k]; ++k)
			;
	}
	if (k > n)
		k = n;
	str = malloc(sizeof(char) * (g + k + 1));
	if (str == NULL)
		return (NULL);
	for (h = 0; h < g; h++)
		str[h] = s1[h];
	for (h = 0; h < k; h++)
		str[h + g] = s2[h];
	str[g + k] = '\0';
	return (str);
}
