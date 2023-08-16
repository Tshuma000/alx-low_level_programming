#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -  executes a function given as a parameter
 * @array: array of elem to print
 * @size: size of array
 * @action: function to callback
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			while (i < size)
			{
				action(array[i]);
				i++;
			}
		}
	}
}
