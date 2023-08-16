#include "main.h"

/**
 * flip_bits - function that returns the number of bits to flip to a number
 * @n: first number to flip
 * @m: second number to flip to
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_op = n ^ m;
	unsigned int count = 0;

	/* Check number of bits with 1 in bit_op */
	while (bit_op)
	{
		/* Check if the last bit is 1 */
		count += (bit_op & 1);
		/* Move the bits to the right by 1 bit */
		bit_op >>= 1;
	}
	return (count);
}
