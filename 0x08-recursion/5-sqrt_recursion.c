#include "main.h"

/**
 * _sqrtz - the natural square root
 * @b: the first integer
 * @c: the second integer
 * Return: if n is negative -1, otherwise 0
 */

int _sqrtz(int b, int c)
{
	if ((c * c) == b)
		return (c);
	if (c == b / 2)
	{
		return (-1);
	}
	return (_sqrtz(b, c + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to consider
 * Return: if n is negative -1, otherwise 0
 */

int _sqrt_recursion(int n)
{
	int q = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
	{
		return (1);
	}
	return (_sqrtz(n, q));
}
