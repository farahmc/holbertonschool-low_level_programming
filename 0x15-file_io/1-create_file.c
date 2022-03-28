#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content to write in file
 *
 * Description: create a new file with rw------- permissions
 * if file already exists, truncate it
 *
 * Return: 1 is success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, i;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	i = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	write_file = write(open_file, text_content, i);

	if (open_file == -1 || write_file == 1)
		return (-1);

	close(open_file);

	return (1);
}
