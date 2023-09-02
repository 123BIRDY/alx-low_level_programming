#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that adds positive numbers
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Return: 1 if arguments are not digits, otherwise 0
 */

int main(int argc, char *argv[])
{
	int dig1, dig2, add;

	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (dig1 = 1; dig1 < argc; dig1++)
	{
		for (dig2 = 0; argv[dig1][dig2] != '\0'; dig2++)
		{
			if (!isdigit(argv[dig1][dig2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[dig1]);
	}
	printf("%d\n", add);
	return (0);
}
