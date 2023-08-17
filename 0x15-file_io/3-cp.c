#include "main.h"

/**
 * error_file - function that checks if a file can be opened
 * @source: the file from which to check
 * @dest: the destination file to check
 * @argv: vector of arguments
 * Return: void
 */

void error_file(int source, int dest, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: the count of arguments
 * @argv: the vector of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int source, dest, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source dest");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(source, dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(source, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(dest, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close desc %d\n", source);
		exit(100);
	}
	err_close = close(dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close desc %d\n", source);
		exit(100);
	}
	return (0);
}
