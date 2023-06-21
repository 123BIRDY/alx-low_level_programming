#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @b: number to be computed
 * Return: 0 or absolute value
 */

int _abs(int b)
{
	if (b < 0)
	{
		int abs_val;

		abs_val = b * -1;
		return (abs_val);
	}
	return (b);
}
