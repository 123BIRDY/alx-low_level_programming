#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int otherwise = n ^ m;
	unsigned long int count = 0;

	/* Count the number of set bits xor operator */
	while (otherwise)
	{
		count += (otherwise & 1); /* If last bit is 1 */
		/* Shift right the bits by 1 bit */
		otherwise >>= 1;
	}
	return (count);
}
