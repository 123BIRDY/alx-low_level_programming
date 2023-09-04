#include "main.h"

/**
 * _islower - function that prints the lower alphabets
 * @c: The value
 * Return: 1 if true, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
