#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to pointer of linked list
 * @index: the index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		i++;
	}
	current = ptr->next;
	ptr->next = current->next;
	free(current);
	return (1);
}
