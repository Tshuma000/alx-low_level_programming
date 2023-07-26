#include "main.h"

/**
 * reverse_array - reverses an array.
 *@a: the array to be reversed.
 *@n: number of elements of array.
 */

void reverse_array(int *a, int n)
{
	int i, k = 0;
	int b[20];

	for (i = n - 1; i >= 0; i--)
	{
		b[k] = a[i];
		k++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}
