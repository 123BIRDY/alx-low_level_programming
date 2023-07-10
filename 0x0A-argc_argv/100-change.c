#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 when successful, or 1 for Error
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int numb, m, ans;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numb = atoi(argv[1]);
	ans = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && numb >= 0; m++)
	{
		while (numb >= coins[m])
		{
			ans++;
			numb -= coins[m];
		}
	}
	printf("%d\n", ans);
	return (0);
}
