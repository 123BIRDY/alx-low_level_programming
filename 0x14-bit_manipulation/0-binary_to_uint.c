#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int d = 0;

	if (!b) /* Check if b is null */
		return (0);
	/* Iterate to get length of binary string */
	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		d = 2 * d + (b[num] - '0');
	}
	return (d);
}
