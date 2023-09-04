#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile- reads a text file and prints out
 * @filename: the file name
 * @letters: number of characters to read and print
 *
 * Return: letters read and orinted
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fp);
	return (w);
}
