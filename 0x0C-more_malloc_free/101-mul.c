#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

int get_digit(char *s);
int print_strlen(char *s);
void errors(void);

/**
 * get_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int get_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * print_strlen - function that returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int print_strlen(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		g++;
	}
	return (g);
}

/**
 * errors - function that handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, leng, d, carry, digit1, digit2, *result, z = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !get_digit(s1) || !get_digit(s2))
		errors();
	leng1 = print_strlen(s1);
	leng2 = print_strlen(s2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (d = 0; d <= leng1 + leng2; d++)
		result[d] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit1 = s1[leng1] - '0';
		carry = 0;
		for (leng2 = print_strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			digit2 = s2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (digit1 * digit2);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] += carry;
	}
	for (d = 0; d < leng - 1; d++)
	{
		if (result[d])
			z = 1;
		if (z)
			_putchar(result[d] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

