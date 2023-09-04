#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the created file
 * @filename: the file name
 * @text_content: the string to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_pointer, char_printed, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file_pointer = open(filename, O_WRONLY | O_APPEND);
	char_printed = write(file_pointer, text_content, length);

	if (file_pointer == -1 || char_printed == -1)
		return (-1);
	close(file_pointer);
	return (1);
}
