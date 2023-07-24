#include "main.h"

/**
 * swap_int - swaps two intergers
 *@a: interger 1.
 *@b: interger 2.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
