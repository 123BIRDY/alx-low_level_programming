#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ger;
	unsigned int ind;

	va_start(ger, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(ger, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ger);
}
