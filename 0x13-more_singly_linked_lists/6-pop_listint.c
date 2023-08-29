#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer to link list
 *
 * Return: the removed node data value
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data_value;

	if (!head || !*head)
		return (0);
	data_value = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (data_value);
}
