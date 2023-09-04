#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - alllocates memory to buffer
 * @file: name of the file
 *
 * Returnn: pointer to allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes descriptor
 * @fd: the file descriptor
 */
void close_file(int fd)
{
	int b;

	b = close(fd);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Erroe: cant close fd %d\n", fd);
		exit(100);
	}
}
