#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Return: 1 if program does not receive two numbers, otherwise 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, sol;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sol = num1 * num2;
	printf("%d\n", sol);
	return (0);
}
