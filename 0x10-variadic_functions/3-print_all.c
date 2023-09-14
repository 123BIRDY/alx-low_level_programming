#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all -  function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *str;
	int a = 0;
	va_list arg;

	va_start(arg, format);
	/* Loop through the format string */
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				a++;
				continue;
		}
		if (format[a + 1])
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(arg);
}
