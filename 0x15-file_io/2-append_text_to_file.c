#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: Name of the file to append the text to
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write, length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		res_write = write(fd, text_content, length);
		if (res_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
