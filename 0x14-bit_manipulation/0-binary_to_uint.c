#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[v] != '\0')
	{
		/* Check if char is not 0 or 1 */
		if (b[v] != '0' && b[v] != '1')
		{
			return (0);
		}
		v++;
	} /* Find the decimal of the binary string */
	v = 0;
	while (b[v] != '\0')
	{
		/* Shift the digit by 1 bit or space to the left */
		num <<= 1;
		if (b[v] == '1')
		{
			num += 1;
		}
		v++;
	}
	return (num);
}
