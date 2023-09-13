#include "function_pointers.h"

/**
 * array_iterator - executes function fed as a parameter on elements of array
 * @array: pointer to the array
 * @size: the size of the array
 * @action: pointer to the function that needs to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
	{
		/* Carry out function on each element of array */
		action(array[s]);
	}
}
