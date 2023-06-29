#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @k: string to be modified
 * Return: changed string
 */

char *cap_string(char *k)
{
	int cap = 0;

	while (k[cap])
	{
		while (!(k[cap] >= 97 && k[cap] <= 122))
			cap++;
		if (k[cap - 1] == 32 ||
		k[cap - 1] == '\t' ||
		k[cap - 1] == '\n' ||
		k[cap - 1] == 44 ||
		k[cap - 1] == 59 ||
		k[cap - 1] == 46 ||
		k[cap - 1] == 33 ||
		k[cap - 1] == 63 ||
		k[cap - 1] == 34 ||
		k[cap - 1] == 40 ||
		k[cap - 1] == 41 ||
		k[cap - 1] == 123 ||
		k[cap - 1] == 125 ||
		cap == 0)

		cap++;
	}
	return (k);
}
