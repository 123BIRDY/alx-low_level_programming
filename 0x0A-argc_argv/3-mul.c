#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 when successful, or 1 for Error
 */

int main(int argc, char *argv[])
{
	int numb1, numb2, ans;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	ans = numb1 * numb2;

	printf("%d\n", ans);
	return (0);
}
