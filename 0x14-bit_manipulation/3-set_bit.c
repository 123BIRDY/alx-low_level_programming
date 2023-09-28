#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer t the number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Find if index is within range of bits number in a data type, 8 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Set bit to value of 1 at given index position */
	*n |= (1 << index);

	return (1);
}
