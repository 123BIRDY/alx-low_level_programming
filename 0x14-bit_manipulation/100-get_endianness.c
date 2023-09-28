#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int number = 1;

	/* Change the memory address of the number to point to a char */
	char *data = (char *)&number;

	if (*data)
	{
		return (1); /* Little endian */
	}
	else
	{
		return (0); /* Big endian */
	}
}
