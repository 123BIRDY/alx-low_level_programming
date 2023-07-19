#include "function_pointers.h"

/**
 * array_iterator - executes a function as parameter on each element of array
 * @size: the size of the array
 * @array: the pointer to array of functions
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t e;

	if (array == NULL || action == NULL)
		return;
	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}
