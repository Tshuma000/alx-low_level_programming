#include "main.h"

/**
 * clear_bit - sets value of a bit to 0.
 * @n: bit
 * @index: index starting from 0
 *
 * Return: if successful 1, else -1;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
