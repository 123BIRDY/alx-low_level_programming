#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to determine its length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
