#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0when successful
 */

int main(void)
{
	int read;
	unsigned long nacci1 = 0, nacci2 = 1, add;

	for (read = 0; read < 50; read++)
	{
		add = nacci1 + nacci2;
		printf("%lu", add);

		nacci1 = nacci2;
		nacci2 = add;


		if (add == 49)
			printf("\n");
		else
			printf(", ");
	}
	printf("\n");
	return (0);
}
