#include "main.h"

/**
 * _pow_recursion - function that print the value of x raised to the power of y
 * @x: the number to be raised to a power
 * @y: the power to raise the number by
 * Return: result of calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
