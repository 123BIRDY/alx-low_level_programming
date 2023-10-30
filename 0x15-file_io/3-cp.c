#include "main.h"
/**
 * err_file - function that checks if files can be opened.
 * @file_from: file from which to check
 * @file_to: file to which to check
 * @argv: the arguments vector.
 * Return: no return.
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
 * main - function that checks the code..
 * @argc: the count of arguments.
 * @argv: thearguments vector.
 * Return: 0 when successful.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_frmt;
	ssize_t chars_count, new_read;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	chars_count = 1024;
	while (chars_count == 1024)
	{
		chars_count = read(file_from, buff, 1024);
		if (chars_count == -1)
			err_file(-1, 0, argv);
		new_read = write(file_to, buff, chars_count);
		if (new_read == -1)
			err_file(0, -1, argv);
	}

	error_frmt = close(file_from);
	if (error_frmt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_frmt = close(file_to);
	if (error_frmt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
