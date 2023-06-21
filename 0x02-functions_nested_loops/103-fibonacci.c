#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 when successful
 */

int main(void)
{
	int a = 0;
	unsigned long int s = 1, q = 2, add = q;

	while (q + s < 4000000)
	{
		q += s;
		if (q % 2 == 0)
		add += q;
		s = q - s;
		++a;
	}
	printf("%ld\n", add);
	return (0);
}
