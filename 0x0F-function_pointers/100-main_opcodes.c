#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the arguments passed to the programs
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int dig_bytes, m;
	char *addr;

	if (argc != 2) /* Validity of number of arguments */
	{
		printf("Error\n");
		return (1);
	}
	/* Change arguments to integers */
	dig_bytes = atoi(argv[1]);
	/* Check for negative bytes */
	if (dig_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Set main function address to char pointer */
	addr = (char *)main;

	/* Print the opcodes */
	for (m = 0; m < dig_bytes; m++)
	{
		/* Change the opcodes to two-digit hex string */
		printf("%02hhx%c", addr[m], m < dig_bytes - 1 ? ' ' : '\n');
	}
	return (0);
}
