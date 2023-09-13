#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c, answer;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		/* If input is not valid */
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		answer = cmp(array[c]);
		if (answer != 0)
		{
			/* Index of matching elements */
			return (c);
		}
	}
	/* If no matching element found */
	return (-1);
}
