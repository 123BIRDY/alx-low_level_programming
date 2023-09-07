#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the integer to consider
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* Use malloc to locate memory of size b */
	void *r = malloc(b);

	if (r == NULL) /* Check failure of malloc */
	{
		exit(98);
		/* End the program with exit status 98 if malloc failed */
	}
	return (r);
}
