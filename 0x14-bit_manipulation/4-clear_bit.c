#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number to consider
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hide;

	/* Find if index is within range of number of bits in data type, 8 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Create a mask to clear the bit at the given index */
	hide = ~(1 << index);
	/* Use bitwise operator AND (&) to clear the bit */
	*n &= hide;

	return (1);
}
