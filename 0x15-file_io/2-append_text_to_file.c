#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, write_me, g = 0;

	if (filename == NULL)
		return (-1);
	/* Open the file in append mode */
	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);
	/* If text_content has somethings, append it to file */
	if (text_content)
	{
		/* Counts the number of chars in text_content */
		while (text_content[g])
			g++;
		/* Write text_content to the file */
		write_me = write(filedes, text_content, g);
		/* Checks if writing to the file failed */
		if (write_me == -1)
			return (-1);
	}
	close(filedes);
	return (1);
}
