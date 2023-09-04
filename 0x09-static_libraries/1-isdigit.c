#include "main.h"

/**
 * _isdigit - function that checks for a digit between 0 & 9
 * @c: Integer to be considered
 * Return: 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
