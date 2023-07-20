#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of parameters to be summed
 * Return: 0 if n == 0, otherwise the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	int add = 0;
	unsigned int d;

	if (n == 0)
	{
		return (0);
	}
	va_start(par, n);

	for (d = 0; d < n; d++)
		add += va_arg(par, int);
	va_end(par);
	return (add);
}
