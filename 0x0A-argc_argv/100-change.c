#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints the number of coins to make change for amount of money
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int v, mints, cents, denom_num;
	int denom[] = {25, 10, 5, 2, 1}; /* Denominations of currency present */

	if (argc != 2)
	{
		printf("Error\n");
		return (1); /* Find correct number of arguments */
	}
	cents = atoi(argv[1]); /* Convert arguments to integers */
	if (cents < 0)
	{
		printf("0\n");
		return (0); /* Check for negative input */
	}
	mints = 0;
	denom_num = sizeof(denom) / sizeof(denom[0]);
	/* Find the number of denominations */

	for (v = 0; v < denom_num; v++)
	{
		mints += cents / denom[v];
		/* Add no. of coins to get denomination */
		cents %= denom[v];
		/* Check the remaining denominations */
	}
	printf("%d\n", mints); /* Print minimum no. of coins */
	return (0);
}
