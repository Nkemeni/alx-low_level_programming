#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>




/**
 * read_textfile - reads a test file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int size_read;
	int size_written;
	char *buffer = NULL;

	if (filename == NULL)   /* check if filename is NULL */
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)     /*check if the file cannot be opened */
		return (0);

	buffer = malloc(letters * sizeof(char));

	size_read = read(fd, buffer, letters);  /* read from file and temporarily store in buffer */

	size_written = write(1, buffer, size_read);    /* read the text from buffer and write to stdout */

	if (size_written == -1 || size_written != size_read)
		return (0);

	return (size_written);
}





