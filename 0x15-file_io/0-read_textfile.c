#include "main.h"

/**
 * read_textfile - function that reads text file and prints to the POSIX stdout
 * @filename: Name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t filedes, read_me, write_me;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	/* Open the file to be read and store file descrptor */
	filedes = open(filename, O_RDONLY);
	/* Read from the file and stores number of bytes read */
	read_me = read(filedes, buff, letters);
	/* Write to standard output and store the number of bytes written */
	write_me = write(STDOUT_FILENO, buff, read_me);
	if (filedes == -1 || read_me == -1 || write_me != read_me)
	{
		free(buff);
		return (0);
	}
	/* Free the memory and close the file descriptor */
	free(buff);
	close(filedes);

	return (write_me);
}
