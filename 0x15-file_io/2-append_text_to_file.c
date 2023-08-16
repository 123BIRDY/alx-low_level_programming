#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, write_file, g = 0;

	if (!filename)
		return (-1);
	/* Open file in append mode */
	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc == -1)
		return (-1);
	if (text_content)
	{
		/* Count the number of characters in text_content */
		while (text_content[g])
			g++;
		/* Write text_context to file */
		write_file = write(desc, text_content, g);
		/* Check if writing to the file failed */
		if (write_file == -1)
			return (-1);
	}
	close(desc);
	return (1);
}
