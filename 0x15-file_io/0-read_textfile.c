#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file to be read
 * @letters: the contents it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t desctor, read_file, write_file;

	if (!filename)
		return (0);
	/* Allocate memory for the buffer */
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	/* Open the file to be read and store descriptor */
	desctor = open(filename, O_RDONLY);
	/* Read the opened file and store number of bytes read */
	read_file = read(desctor, buff, letters);
	/* Write to standard output and store the bytes written */
	write_file = write(STDOUT_FILENO, buff, read_file);

	if (desctor == -1 || read_file == -1 || write_file != read_file)
	{
		free(buff);
		return (0);
	}
	/* Free the memory and close the file descriptor */
	free(buff);
	close(desctor);

	return (write_file);
}
