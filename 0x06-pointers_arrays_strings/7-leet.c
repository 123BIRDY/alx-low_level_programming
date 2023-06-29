#include "main.h"

/**
 * leet - function that encodes a string into 1337 (leet)
 * @x: string to encode
 * Return: the encoded string
 */

char *leet(char *x)
{
	int e, f;
	char alph[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (e = 0; x[e] != '\0'; e++)
	{
		for (f = 0; f < 10; f++)
		{
			if (x[e] == alph[f])
			{
				x[e] = num[f];
			}
		}
	}
	return (x);
}
