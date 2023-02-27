#include "main.h"

/**
 * _strlen - entry point to check length of string
 * @s: integer variable
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
