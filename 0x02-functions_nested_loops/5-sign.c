#include "main.h"

/**
 * print_sign - checks if n is +, - or = 0.
 *@n: number to be checked
 *
 * Return: If n is positive 1, if n is negative -1, if n = 0 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(0);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
