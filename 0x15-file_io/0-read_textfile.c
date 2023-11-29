#include "main.h"
#define BS 1024

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: the file name.
 * @letters: the number of letters.
 * Return:  the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[BS];
	ssize_t char_read, char_wrtn, total_wrtn = 0;
	FILE *fp;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (letters > 0)
	{
		char_read = fread(buff, 1, (letters < BS) ? letters : BS, fp);
		if (char_read <= 0)
			break;
		char_wrtn = write(1, buff, char_read);
		if (char_wrtn <= 0 || char_wrtn != char_read)
		{
			fclose(fp);
			return (0);
		}
		total_wrtn += char_wrtn;
		letters -= char_wrtn;
	}

	fclose(fp);
	return (total_wrtn);
}

