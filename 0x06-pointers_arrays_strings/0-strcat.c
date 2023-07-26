#include "main.h"

/**
 * _strcat - concatenates two strings
 *@dest: string to add on.
 *@src: string to be added.
 *
 * Return: a ponter to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, count = 0, j, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i <= count; i++)
	{
		if (dest[i] == '\0')
		{
			for (j = i; src[k] != '\0'; j++)
			{
				dest[j] = src[k];
				k++;
			}
		}
	}
	return (dest);
}
