#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: size of a triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (k = size - i; k > 1; k--)
			{
				_putchar(32);
			}
			if (i >= 1)
			{
				for (j = 0; j < i; j++)
				{
					_putchar('#');
				}
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
