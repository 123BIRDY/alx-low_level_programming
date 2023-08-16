#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to figure to be changed
 * @index: the index of bits
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Number of bits in a data type is 8: Check if index is in range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Set the bit at the given index to have a value of 1 */
	*n |= (1 << index);

	return (1);
}
