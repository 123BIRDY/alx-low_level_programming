#include "3-calc.h"

/**
 * get_op_func - takes the right function to do the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that matches the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	/* Array of structures holding the function pointers */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* Loop through ops array until right operator is found */
	while (ops[i].op != NULL)
	{
		/* Compare the operator strings */
		if (*(ops[i].op) == *s)
		{
			/* Return the matching function pointer */
			return (ops[i].f);
		}
		i++;
	}
	/* If the operator is not found */
	return (NULL);
}
