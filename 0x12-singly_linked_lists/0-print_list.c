#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: head pointer
 *
 * Return:  the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (!h->str)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
