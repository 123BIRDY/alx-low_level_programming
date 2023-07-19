#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of functions
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return (s);
	}
	return (-1);
}
