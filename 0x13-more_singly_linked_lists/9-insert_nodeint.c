#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to pointer of a linked list
 * @idx: index
 * @n: data value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
