#include "main.h"

/**
 * positive_or_negative - check the entry point
 *
 * @i: parameter to be checked
 *
 * Return: 0 when successful
 */

void positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
