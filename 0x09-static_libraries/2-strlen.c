#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string to consider
 * Return: the length desired
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
