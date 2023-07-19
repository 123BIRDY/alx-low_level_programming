#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to perform simple operations
 * @argc: the count of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int dig1, dig2, ans;
	char *perf;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Change digits string to int */
	dig1 = atoi(argv[1]);
	dig2 = atoi(argv[3]);
	/* Set function to perform operator */
	perf = argv[2];

	/* Check if operator is invalid or not */
	if (get_op_func(perf) == NULL || perf[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && dig2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* Call function with dig1 and dig2 */
	ans = get_op_func(perf)(dig1, dig2);

	printf("%d\n", ans);
	return (0);
}
