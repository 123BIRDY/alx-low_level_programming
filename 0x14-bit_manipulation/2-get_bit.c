#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number from which to get the bit
 * @index: the index of bits
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Number of bits in a data type is 8: Check if index fits */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Move number n to right by index bits positions */
	n >>= index;
	/* Find if last bit ends with 1 */
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
