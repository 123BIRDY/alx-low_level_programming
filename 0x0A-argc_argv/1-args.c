#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore*/
	printf("%d\n", argc - 1);
	return (0);
}
