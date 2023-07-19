#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: when successful 0
 */

int main(int argc, char *argv[])
{
	int bytes, g;
	char *adr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	adr = (char *)main;

	for (g = 0; g < bytes; g++)
	{
		if (g == bytes - 1)
		{
			printf("%02hhx\n", adr[g]);
			break;
		}
		printf("%02hhx ", adr[g]);
	}
	return (0);
}
