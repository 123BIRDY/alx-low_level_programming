#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the argument count
 * @av: double pointer to array of arguments
 * Return: pointer to a new string, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	int a, b, leng = 0, ind = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Calculate the total length of the string */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			leng++;
		}
		leng++; /* Add space for newline */
	}
	leng++; /* Add space for null terminator */
	str = malloc(sizeof(char) * leng);
	/* Allocate memory for the concatenated string */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Concatenate the strings */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[ind++] = av[a][b];
		}
		str[ind++] = '\n';
	}
	str[ind] = '\0';
	return (str);
}
