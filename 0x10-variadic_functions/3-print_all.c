#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list(par);
	int x = 0;
	char *str;

	va_start(par, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(par, int));
				break;
			case 'i':
				printf("%d", va_arg(par, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(par, double));
				break;
			case 's':
				str = va_arg(par, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				x++;
				continue;
		}
		if (format[x + 1])
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(par);
}
