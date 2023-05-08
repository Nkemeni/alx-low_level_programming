#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to be copied to the file
 * Return: 1 0n success | -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	if (filename == NULL)    /* check if the filename is NULL */
		return (-5);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)   /* check if the file was unable to open */
		return (-1);

	if (text_content != NULL)
	{
		size = write(fd, text_content, _strlen(text_content));
		if (size == -1)
			return (-1);
	}

	return (1);
}




