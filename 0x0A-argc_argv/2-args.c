#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: arguments count
 * @argv: vector of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int g; /* Iteration factor */

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (0);
}
