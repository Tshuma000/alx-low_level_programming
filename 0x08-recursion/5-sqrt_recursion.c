#include "main.h"


/**
 * _sqrt - calculated the natural square root of a number
 *@n: number to calculate the square root
 *@i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	} else if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: The number
 *
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
