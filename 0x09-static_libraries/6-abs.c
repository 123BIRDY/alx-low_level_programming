#include "main.h"

/**
 * _abs - function that prints the absolute value of an integer
 * @n: Integer to check
 * Return: the desired absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
