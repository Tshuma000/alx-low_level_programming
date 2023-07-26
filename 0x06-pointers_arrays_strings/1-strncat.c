#include "main.h"

/**
 * _strncat - concatenates two strings.
 *@dest: string to add on
 *@src: string to be added.
 *@n: number of bites of string allowed to add.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
