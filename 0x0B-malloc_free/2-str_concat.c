#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to consider
 * @s2: second string to consider
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *ans;
	int m, n, leng, leng1, leng2;

	leng1 = leng2 = 0;

	if (s1 != NULL)
	{
		m = 0;
		while (s1[m++] != '\0')
			leng1++;
	}
	if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
			leng2++;
	}
	leng = leng1 + leng2;
	ans = malloc(sizeof(char) * (leng + 1));
	if (ans == NULL)
		return (NULL);
	for (m = 0; m < leng1; m++)
		ans[m] = s1[m];
	for (n = 0; n < leng2; n++, m++)
		ans[m] = s2[n];
	ans[leng] = '\0';
	return (ans);
}
