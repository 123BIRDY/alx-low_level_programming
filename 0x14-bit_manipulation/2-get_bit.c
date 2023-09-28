#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to get the bit
 * @index: the index, starting from 0 of the bit you want to get
 * Return:  the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Find if index is within range of 8 the no of bits in data type */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Shift right n by index bits of places */
	n >>= index;
	/* If bit at far right ends with 1 */
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
