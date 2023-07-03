#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be considered
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *d = needle;

		while (*m == *d && *d != '\0')
		{
			m++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
