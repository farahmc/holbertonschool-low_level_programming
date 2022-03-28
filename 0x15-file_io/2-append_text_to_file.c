#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
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

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, app_file, length;

	if (filename == NULL)
		return (-1);

	length = _strlen(text_content);
	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);

	app_file = write(open_file, text_content, length);
	if (app_file == -1)
		return (-1);

	close (open_file);

	return (1);
}
