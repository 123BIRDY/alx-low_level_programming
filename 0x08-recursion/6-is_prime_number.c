#include "main.h"

/**
 * check_divide - function to check whether number is divisible
 * @v: the number to consider
 * @divide: the operator
 * Return: 1 if it is prime number, otherwise 0
 */

int check_divide(int v, int divide)
{
	if (divide == 1 || divide == v)
		return (0);
	if (v % divide == 0)
	{
		return (1);
	}
	return (check_divide(v, divide - 1));
}

/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * @n: the integer to consider
 * Return: 1 if it is prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
	{
		return (1);
	}
	return (!check_divide(n, n - 1));
}
