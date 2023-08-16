#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int dig = 1;
	/* Change the memory address of the int digit into a pointer to char */
	char *data = (char *)&dig;

	if (*data)
	{
		return (1); /* For little endian */
	}
	else
	{
		return (0); /* For big endian */
	}
}
