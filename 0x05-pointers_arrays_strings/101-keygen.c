#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0 when successful
 */

int main(void)
{
	int pswd[100];
	int add = 0;
	int a, d;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pswd[a] = rand() % 78;
		add += (pswd[a] + 48);
		putchar(pswd[a] + 48);
		if ((2772 - add) - 48 < 78)
		{
			d = 2772 - add - 48;
			add += d;
			putchar(d + 48);
			break;
		}
	}
	return (0);
}
