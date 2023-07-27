#include <stdio.h>

void lead(void) __attribute__((constructor));

/**
 * lead - function that prints before the main executes
 * Return: void
 */

void lead(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
