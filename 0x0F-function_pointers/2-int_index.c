#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched
 * @size: size of array
 * @cmp: callback function
 *
 * Return: index if successful, -1 if fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n, i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			n = (*cmp)(array[i]);
			if (n == 1)
				return (i);
			i++;
		}
		if (n == 0)
			return (-1);
	}
	return (-1);
}
