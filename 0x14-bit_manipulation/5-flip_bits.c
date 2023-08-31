#include "main.h"

/**
 * flip_bits - flips bits
 * @n: bbits
 * @m: number of bits
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int ccurrent;
	unsigned long int ex_clu = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		ccurrent = ex_clu >> i;
		if (ccurrent & 1)
			count++;
	}
	return (count);
}
