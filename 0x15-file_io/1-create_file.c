#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Name of the file to be read
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, write_me, b = 0;

	if (filename == NULL)
		return (-1);
	/*
	 * Open a file that write only, create if it none exists
	 * Truncate to zero length if it exists
	 * 0600, Sets file permissions to rw- --- ---, read & write for owner only
	 */
	filedes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);
	/* If text_content has something in it, write it to file */
	if (text_content)
	{
		/* Counts number of chars in text_content */
		while (text_content[b])
			b++;
		/* Writes text_content to file */
		write_me = write(filedes, text_content, b);
		if (write_me == -1)
		{
			close(filedes);
			return (-1);
		}
	}
	close(filedes);
	return (1);
}
