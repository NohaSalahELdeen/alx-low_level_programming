#include "lists.h"

/**
  * sum_listint -sum of all the data of linked list.
  * @head: pointer to list.
  * Return: the sum or 0 if list is empty.
  */

int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listint_t *ptr;

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
