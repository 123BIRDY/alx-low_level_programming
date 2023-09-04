#include "main.h"

/**
 * _atoi - Entry point
 * Description: Convert String to Integer
 * @s: Integer
 * Return: char
 */

int _atoi(char *s)
{
	int mark = 1;
	unsigned int sol = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			mark *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		sol = sol * 10 + (*s - '0');
		s++;
	}
	return (mark * sol);
}
