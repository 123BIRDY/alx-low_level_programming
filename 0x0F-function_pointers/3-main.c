#include "3-calc.h"
#include <stdio.h>

/**
 * main - the function that performs the simple operations
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int numb1, numb2, answer;
	char *op_elem;

	if (argc != 4) /* The validity of number of arguments */
	{
		printf("Error\n");
		exit(98);
	}
	/* Change numb string to int */
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);

	/* Find function for operator */
	op_elem = argv[2];

	/* If the operator is invalid */
	if (get_op_func(op_elem) == NULL || op_elem[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && numb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Call function with numb1 and numb2 */
	answer = get_op_func(op_elem)(numb1, numb2);

	printf("%d\n", answer);
	return (0);
}
