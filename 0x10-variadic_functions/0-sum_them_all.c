#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of parameters to sum
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	va_list arg;
	unsigned int m;

	if (n == 0)
		return (0);
	/* Format the va_list with the first parameter */
	va_start(arg, n);

	for (m = 0; m < n; m++)
	{
		/* Sum up each parameter */
		add += va_arg(arg, int);
	}
	/* Close the va_list */
	va_end(arg);
	return (add);
}
