#include "main.h"

/**
 * puts_half - prints haf characters of a string.
 *@str: the string
 */

void puts_half(char *str)
{
	int i, length, n, middle;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	n = (length - 1) / 2;
	middle = length / 2;

	if (length % 2 != 0)
	{
		for (i = 0; i < length; i++)
		{
			if (i >= n)
			{
				_putchar(str[i]);
			}
		}
	} else
	{
		for (i = 0; i < length; i++)
		{
			if (i >= middle)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
