#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *@n: number of times '\' to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	_putchar('\\');
	_putchar('\n');
	if (i == n - 1)
	{
		continue;
	}
	_putchar(' ');
	if (i >= 1)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
	}
	}
}
