#include "main.h"
int _sqrt_recursion(int n);
int real_sqrt_recursion(int x, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to calculate the square root of
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - finds natural square root of a number
 * @x: number to calculate the square root
 * @i: iteration factor
 * Return: square root
 */

int real_sqrt_recursion(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (real_sqrt_recursion(x, i + 1));
}
