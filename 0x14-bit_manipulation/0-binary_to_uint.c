#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int dig;

	dig = 0;
	if (b == NULL)
		return (0);
	/* Loop through to get length of the string */
	for (q = 0; b[q] != '\0'; q++)
	{
		/* Check if character is 1 or 0 */
		if (b[q] != '0' && b[q] != '1')
			return (0);
	}
	/* Get decimal value of binary string */
	for (q = 0; b[q] != '\0'; q++)
	{
		/* Left shift digit by 1 bit */
		dig <<= 1;
		if (b[q] == '1')
			dig += 1;
	}
	return (dig);
}
