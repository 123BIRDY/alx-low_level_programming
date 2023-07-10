#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0 when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
