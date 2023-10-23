#include "lists.h"

/**
  * pop_listint - deletes head node.
  * @head: pointer point to first node.
  * Return: 0 if linked list empty.
  */

int pop_listint(listint_t **head)
{
	listint_t *d;
	int x;

	if (*head == NULL)
		return (0);
	d = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(d);
	return (x);
}
