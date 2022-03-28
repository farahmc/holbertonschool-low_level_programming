#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads text file and displays in stdoutput
 * @filename: file name
 * @letters: number of chars to print
 *
 * Description: read text file and display in std output
 *
 * Return: number of actual letters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, size, write_file;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	size = read(open_file, buffer, letters);
	if (size < 0)
	{
		free(buffer);
		close(open_file);
		return (0);
	}
	buffer[letters] = '\0';
	close(open_file);

	write_file = write(STDOUT_FILENO, buffer, size);
	if (size != write_file || write_file == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (write_file);
}
