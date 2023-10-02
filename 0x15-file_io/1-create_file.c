#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, write_file, m = 0;

	if (filename == NULL)
		return (-1);
	/*
	 * Open the file to wrie only, create if it does not exist
	 * Set to zero length if it exists
	 * Set file to read and write for owner rw-------, 0600
	 */
	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[m]) /* Check no of chars in string */
			m++;
		write_file = write(fildes, text_content, m);
		if (write_file == -1)
		{
			close(fildes);
			return (-1);
		}
	}
	close(fildes);
	return (1);
}
