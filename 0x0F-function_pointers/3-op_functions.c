#include "3-calc.h"

/**
 * op_add - function that returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: the required difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: the required product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the required division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the required remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
