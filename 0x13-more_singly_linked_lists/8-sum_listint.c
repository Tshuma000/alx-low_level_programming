#include "lists.h"

/**
 * sum_listint - sum all thedata value of the lists
 * @head: pointer to the list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
