#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: all other variable arguments to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list arg;
	unsigned int c;

	va_start(arg, n);
	for (c = 0; c < n; c++)
	{
		/* Fetch the next argument from the list */
		s = va_arg(arg, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && c != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
