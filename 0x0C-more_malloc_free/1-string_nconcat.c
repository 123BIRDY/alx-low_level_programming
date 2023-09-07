#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory allocated
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ans;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Find length of two strings */
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		/* Set n to length of s2 */
		n = len2;
	}
	/* Set memory for ans string */
	ans = malloc(len1 + n + 1);
	if (ans == NULL)
	{
		return (NULL);
	}
	/* Copy s1 to the start of the ans string */
	memcpy(ans, s1, len1);
	/* Copy first n byte of s2 to the end of ans string */
	memcpy(ans + len1, s2, n);

	ans[len1 + n] = '\0';
	return (ans);
}
