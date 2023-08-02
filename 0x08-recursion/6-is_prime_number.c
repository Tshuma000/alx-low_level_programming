#include "main.h"

int _get_prime(int n, int i);
/**
 * is_prime_number - checks where input number is prime or not
 *@n: The number to be checked
 *
 * Return: 1 if the input number is prime, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (_get_prime(n, 1));
}

/**
 * _get_prime - function to get a prime number.
 *@n: number to check.
 *@i: iterator
 *
 * Return: 1 if successful.
 */

int _get_prime(int n, int i)
{
	if (n > 1 && i > 1)
	{
		if (n % i == 0)
		{
			if (i == n)
			{
				return (1);
			} else if (i != n)
			{
				return (-1);
			}
		}
	}
	return (_get_prime(n, i + 1));
}
