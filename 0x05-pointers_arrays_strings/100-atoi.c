#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted into integer
 * Return: converted string
 */

int _atoi(char *s)
{
	int c = 0;
	int len = 0;
	int dig = 0;
	int x = 0;
	int q = 0;
	int b = 0;

	while (s[len] != '\0')
		len++;
	while (c < len && b == 0)
	{
		if (s[c] == 45)
			++x;
		if (s[c] >= 48 && s[c] <= 57)
		{
			dig = s[c] - 48;
			if (x % 2)
				dig = -dig;
			q = q * 10 + dig;
			b = 1;
			if (s[c + 1] < 48 || s[c + 1] > 57)
				break;
			b = 0;
		}
		c++;
	}
	if (b == 0)
		return (0);
	return (q);
}
