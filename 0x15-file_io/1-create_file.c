#include "main.h"

/**
 * create_file - Creates a file with a given name and writes it
 * @filename: Name of the file to create
 * @text_content: Text to write to the created file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t num_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		num_written = write(fd, text_content, i);
		if (num_written != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
