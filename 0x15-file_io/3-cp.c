#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message and exit with a specific code
 * @err_code: The error code to exit with
 * @message: The error message to display
 * @arg: Argument for the error message
 *
 * Return: void
 */
void error_exit(int err_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(err_code);
}

/**
 * main - Program entry point
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit(100, "Error: Can't close file descriptors\n", "");

	return (0);
}
