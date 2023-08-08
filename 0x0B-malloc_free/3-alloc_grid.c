#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers.
 * @width: the x axis
 * @height: the y axis
 *
 * Return: if successsful, a pointer to array. if fail, NULL.
 */

int **alloc_grid(int width, int height)
{
	int **my_array, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	my_array = malloc(sizeof(int *) * height);
	if (my_array == NULL)
	{
		free(my_array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		my_array[i] = calloc(width, sizeof(int));

		if (my_array[i] == NULL)
		{
			free(my_array);
			return (NULL);
		}
	}
	return (my_array);
}
