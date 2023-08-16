#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int desc, write_file,  v = 0;

	if (!filename)
		return (-1);

	/*
	 * Open file for write only, if it does not exist create it
	 * Truncate to 0 length if it exists, 0600 sets file permissions
	 * To rw- --- --- (read and write only for owner)
	 */
	desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (desc == -1)
		return (-1);
	if (text_content)
	{
		/* Count number of characters in text_content */
		while (text_content[v])
			v++;
		/* Write text_content to file */
		write_file = write(desc, text_content, v);
		if (write_file == -1)
		{
			close(desc);
			return (-1);
		}
	}
	close(desc);
	return (1);
}
