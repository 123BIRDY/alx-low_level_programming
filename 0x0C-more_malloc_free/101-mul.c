#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_len(char *str);
char *create_xarray(int size);
char *format_zeroes(char *str);
void find_prod(char *prod, char *mult, int digit, int zeroes);
void add_numb(char *final_prod, char *next_prod, int next_len);

/**
 * get_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int get_len(char *str)
{
	int leng = 0;

	while (*str++)
		leng++;

	return (leng);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *arr;
	int ind;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (ind = 0; ind < (size - 1); ind++)
		arr[ind] = 'x';

	arr[ind] = '\0';

	return (arr);
}

/**
 * format_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *format_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * find_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int find_digit(char c)
{
	int dig = c - '0';

	if (dig < 0 || dig > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (dig);
}

/**
 * find_prod - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void find_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = get_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_numb - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_numb(char *final_prod, char *next_prod, int next_len)
{
	int nums, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		nums = (*final_prod - '0') + (*next_prod - '0');
		nums += tens;
		*final_prod = (nums % 10) + '0';
		tens = nums / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		nums = (*next_prod - '0');
		nums += tens;
		*final_prod = (nums % 10) + '0';
		tens = nums / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = format_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = format_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_len(argv[1]) + get_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = get_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = find_digit(*(argv[2] + index));
		find_prod(next_prod, argv[1], digit, zeroes++);
		add_numb(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
