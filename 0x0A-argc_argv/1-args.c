#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: the count of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /* This ignores the argv */
	printf("%d\n", argc - 1);
	return (0);
}
