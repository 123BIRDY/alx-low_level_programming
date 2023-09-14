#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list arg;

	va_start(arg, n);
	for (c = 0; c < n; c++)
	{
		/* Print, if the separator is not the last argument */
		printf("%d", va_arg(arg, int));
		if (separator != NULL && c != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
