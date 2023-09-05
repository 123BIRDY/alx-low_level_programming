#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * @str: the pointer to the string to consider
 * Return: pointer to a new string which is a duplicate of the string
 */

char *_strdup(char *str)
{
	char *dup;
	int leng = 0, m;

	if (!str)
		return (NULL);
	while (str[leng] != '\0')
	{
		leng++; /* Determine the length of the string */
	}
	dup = malloc(sizeof(char) * (leng + 1));
	/* Allocates memory to the new string */

	if (!dup)
		return (NULL);
	for (m = 0; m < leng; m++)
	{
		dup[m] = str[m]; /* This moves the string into the new string */
	}
	dup[leng] = '\0';
	return (dup);
}
