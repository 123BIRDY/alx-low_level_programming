#include "main.h"
int is_prime_number(int n);
int confirm_prime(int z, int i);

/**
* is_prime_number - function that tells integer is prime number or not
* @n: integer to consider
* Return: 1 if prime number, otherwise 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (confirm_prime(n, n - 1));
}

/**
* confirm_prime - calcultes the prime number of set of integers
* @i: iteration factor
* @z: integer to consider
* Return: 1 if prime number, otherwise 0
*/

int confirm_prime(int z, int i)
{
	if (i == 1)
		return (1);
	if (z % i == 0 && i > 0)
		return (0);
	return (confirm_prime(z, i - 1));
}
