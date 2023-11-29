#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrtn;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	wrtn = write(fd, text_content, strlen(text_content));

	if (wrtn == -1 || wrtn < (ssize_t)strlen(text_content))
		return (-1);
	return (1);
}
