#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, write_file, v = 0;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[v])
			v++;
		write_file = write(fildes, text_content, v);
		if (write_file == -1)
			return (-1);
	}
	close(fildes);
	return (1);
}
