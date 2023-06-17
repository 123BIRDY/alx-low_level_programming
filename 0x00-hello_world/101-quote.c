#include <unistd.h>

/**
 * main - Program that prints a line to the standard error
 *
 * Return: 0 when successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
