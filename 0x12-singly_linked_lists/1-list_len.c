#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to head
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
