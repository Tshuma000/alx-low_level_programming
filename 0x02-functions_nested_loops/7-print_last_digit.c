#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: a whole number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = n * -1;
	}

	r = n % 10;
	_putchar(r + '0');
	return (r);
}
