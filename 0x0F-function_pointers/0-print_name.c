#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to be printed
 * @f: the pointer to the argument
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	/* Invoke the function pointer f with the argument name */
	f(name);
}
