#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);

	s++;

	return (1 + _strlen(s));
}


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
	int open_file, write_file, length;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	length = _strlen(text_content);
	write_file = write(open_file, text_content, length);

	if (write_file == -1)
	{
		close(open_file);
		return (-1);
	}

	close(open_file);

	return (1);
}
