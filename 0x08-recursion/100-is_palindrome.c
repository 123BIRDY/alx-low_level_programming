#include "main.h"

/**
 * check_length - function that returns the length of a string
 * @st: the string to consider
 * Return: if string is palindrome 1, otherwise 0
 */

int check_length(char *st)
{
	if (*st == '\0')
		return (0);
	return (1 + check_length(st + 1));
}

/**
 * get_palindrome - function that checks whether a string is a palindrome
 * @st: the string to consider
 * @pop: the beginning of the string
 * @last: the end of the string
 * Return: 1 if it is palindrome, otherwise 0
 */

int get_palindrome(char *st, int pop, int last)
{
	if (pop >= last)
		return (1);
	if (*(st + pop) == *(st + last))
	{
		return (get_palindrome(st, pop + 1, last - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: the string to consider
 * Return: 1 if it is palindrome, otherwise
 */

int is_palindrome(char *s)
{
	int leng = check_length(s);

	if (leng == 0 || leng == 1)
	{
		return (1);
	}
	return (get_palindrome(s, 0, leng - 1));
}
