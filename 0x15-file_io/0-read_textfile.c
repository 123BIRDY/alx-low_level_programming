#include "main.h"

/**
 * read_textfile - function that reads a text file and prints POSIX output
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff; /* Buffer to store the text */
	ssize_t fildes, read_file, write_file;
	/* File descriptor, number of bytes to read and write */

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* Open file and store in fildes */
	fildes = open(filename, O_RDONLY);

	/* Read from the file and store the bytes read */
	read_file = read(fildes, buff, letters);

	/* Write to stdout and store the bytes */
	write_file = write(STDOUT_FILENO, buff, read_file);

	if (fildes == -1 || read_file == -1 || write_file != read_file)
	{
		free(buff);
		return (0);
	}
	free(buff); /* Free the bytes stored and close fildes */
	close(fildes);
	return (write_file);
}
