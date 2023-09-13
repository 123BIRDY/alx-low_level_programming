#ifndef CALC_H
#define CALC_H

#include <stdlib.h>

/*
 * Desc: This is the header file that contains all the structure
 * types and prototypes to be used by other functions
 */

/**
 * struct op - Main entry point
 * Description: Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototypes */
int op_add(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
