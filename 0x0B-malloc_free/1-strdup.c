#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: original string
 *
 * Return: a pointer to anewly allocated space, if failure returns NULL.
 */

char *_strdup(char *str)
{
	char *ptr;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		size++;
		i++;
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
