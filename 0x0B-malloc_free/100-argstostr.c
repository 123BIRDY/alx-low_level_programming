#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: count the arguments
 * @av: array of arguments
 * Return: pointer to a new string, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	char *str, *m;
	int q, r, s, leng = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		m = av[q];
		r = 0;

		while (m[r++])
			leng++;
		leng++;
	}
	str = malloc(sizeof(char) * (leng + 1));
	if (str == NULL)
		return (NULL);
	for (q = 0, r = 0; q < ac && r < leng; q++)
	{
		m = av[q];
		s = 0;

		while (m[s])
		{
			str[r] = m[s];
			s++;
			r++;
		}
		str[r++] = '\n';
	}
	str[r] = '\0';
	return (str);
}
