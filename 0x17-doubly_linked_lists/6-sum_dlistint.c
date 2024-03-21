#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a  linked list.
 * @head: pointer.
 * Return: sum or 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;
	dlistint_t *ptr;

	ptr = head;
	if (head == NULL)
		return (0);
	for (i = 0; ptr != NULL; i++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
