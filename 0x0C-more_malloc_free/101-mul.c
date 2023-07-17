#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int get_len(char *s);
char make_array(int size);
char initialize_numb(char *str);
void get_mul(char *prod, char *mult, int dig, int num);
void sum_nums(char *next_len, char *end_prod, char *next_len);

/**
 * get_len - function that finds the length of the string
 * @s: string to consider
 * Return: string length
 */

int get_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * make_array - creates an array of characters
 * @size: size of the array
 * Return: pointer to array
 */

char make_array(int size)
{
	int ind;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (ind = 0; ind < (size - 1); ind++)
		array[ind] = 'x';
	array[ind] = '\0';
	return (array);
}

/**
 * initialize_numb - function that iterates through a set of numbers
 * @str: string of numbers
 * Return: pointer to next number
 */

char initialize_numb(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * get_number - function to change digit to character
 * @x: the desired character
 * Return: converted digit
 */

int get_number(char x)
{
	int dig = x - 48;

	if (dig < 48 || dig > 57)
	{
		printf("Error\n");
		exit(98);
	}
	return (dig);
}
