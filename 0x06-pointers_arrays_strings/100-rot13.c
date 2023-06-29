#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @y: string parameter to be encoded
 * Return: pointer to string
 */

char *rot13(char *y)
{
	int v = 0;

	while (y[v])
	{
		while ((y[v] >= 97 && y[v] <= 122) || (y[v] >= 64 && y[v] <= 90))
		{
			if ((y[v] >= 110 && y[v] <= 122) || (y[v] >= 78 && y[v] <= 90))
			{
				y[v] = y[v] - 13;
				break;
			}
			y[v] = y[v] + 13;
			break;
		}
		v++;
	}
	return (y);
}
