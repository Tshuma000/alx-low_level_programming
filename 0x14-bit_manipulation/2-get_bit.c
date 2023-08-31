#include "main.h"

/**
 * get_bit - returns value of a bit at intervals
 * @n: the bit
 * @index: index starting from zero
 *
 * Return: the value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_number;

	if (index > 63)
		return (-1);
	bit_number = (n >> index) & 1;
	return (bit_number);
}
