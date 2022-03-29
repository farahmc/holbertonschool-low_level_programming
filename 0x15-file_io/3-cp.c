#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - program that copies content of a file to another
 * @argc: number of arguments
 * @argv: pointers to arguments
 *
 * Description: copy contents of a file to another
 *
 * Return: Error 97 if argument count is wrong
 * Error 98 if source file doesn't exist or not readable
 * Error 99 if destination file not writable
 */

int main(int argc, char *argv[])
{
	int source, dest, _read, _write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	_read = 1024;
	while (_read == 1024)
	{
		_read = read(source, buffer, 1024);

		if (_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(source);
			exit(98);
		}

		_write = write(dest, buffer, _read);
		if (_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(dest);
			exit(99);
		}
	}

	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	else
		close(source);

	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	else
		close(dest);

	return (0);
}
