#include "main.h"

/**
 * string_toupper - changes lowercase characters to uppercase
 *@a: the strings.
 *
 * Return: the changed string.
 */

char *string_toupper(char *a)
{
	int i = 0, count = 0;

	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		if (a[i] < 123 && a[i] > 96)
			a[i] -= 32;
	}
	return (a);
}
