#include "main.h"

/**
 * _abs - prints the absolute value of n.
 *@n: value to be checked and printed
 *
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	} else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
