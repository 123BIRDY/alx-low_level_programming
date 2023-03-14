#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: parameter that counts the arguments
 * @av: the argument vector
 * Return: pointer to new string, NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int p = 0;
	int i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			p++;
			j++;
		}

		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * p) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
