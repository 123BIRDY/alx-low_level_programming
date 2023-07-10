#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that adds positive numbers
 * @argc: counts of arguments
 * @argv: array of arguments
 * Return: 0 when successful, or 1 for Error
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int numb, dig;

	for (numb = 1; numb < argc; numb++)
	{
		for (dig = 0; argv[numb][dig]; dig++)
		{
			if (argv[numb][dig] < 48 || argv[numb][dig] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[numb]);
	}
	printf("%d\n", add);
	return (0);
}
