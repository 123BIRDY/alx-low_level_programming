#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string to print
 * @f: pointer to function that takes char arguments and return void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
