#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number to be changed
 * @index: the index of bits
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hide;

	/* Number of bits in a data type is 8: Check if index is in range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Create a blockade to clear the bit at the given index */
	hide = ~(1 << index);
	/* Use bitwise AND (&) to clear the bit at the given index */
	*n &= hide;

	return (1);
}
