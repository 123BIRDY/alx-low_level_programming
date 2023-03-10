#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - change to coins
 * @argc: number of command arguments
 * @argv: name of array
 * Return: 0 when succesful
 */

int main(int argc, char *argv[])
{
	int i, coins, cents, num_denom;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	num_denom = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < num_denom; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
