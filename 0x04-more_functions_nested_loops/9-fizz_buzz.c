#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	char z[] = "Fizz";
	char bz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
	if (n == 100)
		printf("%s", bz);
	else if ((n % 3 == 0) && (n % 5 == 0))
		printf("%s ", fb);
	else if (n % 3 == 0)
		printf("%s ", z);
	else if (n % 5 == 0)
		printf("%s ", bz);
	else
		printf("%d ", n);
	}
	printf("\n");
	return (0);
}
