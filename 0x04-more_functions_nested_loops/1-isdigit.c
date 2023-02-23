#include "main.h"

/**
 * _isdigit - checks entry point
 * @c: integer variable
 * Return: 1 is true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
