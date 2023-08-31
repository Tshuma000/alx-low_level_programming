#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: pointer to bit
 * @index: index starting from 1
 *
 * Return: 1 if it worked or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
