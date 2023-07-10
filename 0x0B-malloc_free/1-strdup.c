#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: the string to consider
 * Return: pointer to the duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	int d, leng = 0;
	char *duc;

	if (str == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	duc = malloc((sizeof(char) * leng) + 1);

	if (duc == NULL)
		return (NULL);
	for (d = 0; d < leng; d++)
		duc[d] = str[d];
	duc[leng] = '\0';

	return (duc);
}
