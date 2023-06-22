#include "main.h"

/**
 * positive_or_negative - finds an integer to be positive, negative or zero
 * @i: parameter to be checked
 * Return: 0 when successful.
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i == 0)
	{
		printf("%d is %s\n", i, "zero");
	}
	else
	{
		printf("%d is %s\n", i, "positive");
	}
}
