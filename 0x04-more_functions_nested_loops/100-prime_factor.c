#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int div, num = 612852475143;

	for (div = 3; div < 782849; div = div + 2)
	{
		while ((num % div == 0) && (num != div))
			num = num / div;
	}
	printf("%lu\n", num);
	return (0);
}
