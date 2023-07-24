#include "main.h"

/**
 * puts2 - prints every other character
 *@str: a string
 */

void puts2(char *str)
{
	int i, length;

	length = 0;

	for (i = 0; str[i] != 0; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		} else if (i % 2 == 0)
		{
			_putchar(str[i]);
		} else
		{
			continue;
		}
	}
	_putchar('\n');
}
