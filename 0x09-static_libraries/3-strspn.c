#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to consider
 * @accept: the required substring
 * Return: the value of the desired length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int leng = 0;
	int k, m;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[k] == accept[m])
			{
				leng++;
				break;
			}
		}
		if (accept[m] == '\0')
		{
			return (leng);
		}
	}
	return (leng);
}
