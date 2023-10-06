#include "main.h"

void err_file(int file_from, int file_to, char *argv[]);

/**
 * err_file - function to check errors in the file
 * @file_from: the source file
 * @file_to: the destination file
 * @argv: the array of arguments
 * Return: void
 */

void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: the argument count
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t count, new;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(file_from, buf, 1024);
		if (count == -1)
			err_file(-1, 0, argv);
		new = write(file_to, buf, count);
		if (new == -1)
			err_file(0, -1, argv);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
