#include "main.h"
int is_palindrome(char *s);
int _strlen_recursion(char *s);
int check_drome(char *s, int f, int leng);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome if not 0
 * @s: string to consider
 * Return: 1 if is it, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_drome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - prints the length of the string
 * @s: string to check the length
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_drome - checks for palindrome of characters recursively
 * @s: string to consider
 * @f: iteration factor
 * @leng: string length
 * Return: 1 if palindrome, otherwise 0
 */

int check_drome(char *s, int f, int leng)
{
	if (*(s + f) != *(s + leng - 1))
	{
		return (0);
	}
	if (f >= leng)
	{
		return (1);
	}

	return (check_drome(s, f + 1, leng - 1));
}
