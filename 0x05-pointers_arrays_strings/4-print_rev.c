#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *@s: string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length; i >= 0; i--)
	{
		if (s[i] == '\0')
		{
			continue;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
