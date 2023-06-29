#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @y: string to be encoded
 * Return: encoded string
 */

char *rot13(char *y)
{
	int u, b;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (u = 0; y[u] != '\0'; u++)
	{
		for (b = 0; b < 52; b++)
		{
			if (y[u] == alph[b])
			{
				y[u] = rot[b];
				break;
			}
		}
	}
	return (y);
}
