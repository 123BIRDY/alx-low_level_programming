#include "main.h"
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void rev_string(char *b);

/**
 * infinite_add - function that adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: pointer to buffer
 * @size_r: size of the buffer
 * Return: pointer to function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, m = 0, w = 0, dig = 0;
	int v1 = 0, v2 = 0, tem = 0;

	while (*(n1 + m) != '\0')
		m++;
	while (*(n2 + w) != '\0')
		w++;
	m--;
	w--;
	if (w >= size_r || m >= size_r)
		return (0);
	while (w >= 0 || m >= 0 || of == 1)
	{
		if (m < 0)
			v1 = 0;
		else
			v1 = *(n1 + m) - '0';
		if (w < 0)
			v2 = 0;
		else
			v2 = *(n2 + w) - '0';
		tem = v1 + v2 + of;
		if (tem >= 10)
			of = 1;
		else
			of = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (tem % 10) + '0';
		dig++;
		w--;
		m--;
	}
	if (dig == size_r)
	return (0);
	*(r + dig) = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - reverse array of string
 * @b: parameter of integers
 * Return: 0 when successful
 */

void rev_string(char *b)
{
	int m = 0;
	int w = 0;
	char tem;

	while (*(b + m) != '\0')
	{
		m++;
	}
	m--;
	for (w = 0; w < m; w++, m--)
	{
		tem = *(b + w);
		*(b + w) = *(b + m);
		*(b + m) = tem;
	}
}
