#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @z: string to modify
 * Return: changed string
 */

char *string_toupper(char *z)
{
	int g = 0;

	while (z[g])
	{
		if (z[g] >= 97 && z[g] <= 122)
		{
			z[g] = z[g] - 32;
		}
		g++;
	}
	return (z);
}
