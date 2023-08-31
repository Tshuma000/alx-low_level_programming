#include "main.h"

/**
 * binary_to_uint - converts a binary number to int
 * @b: binary number as a string
 *
 * Return:  the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci_number = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_number = 2 * deci_number + (b[i] - '0');
	}
	return (deci_number);
}
