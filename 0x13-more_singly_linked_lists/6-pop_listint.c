#include "lists.h"

/**
  * pop_listint - deletes head node.
  * @head: pointer point to first node.
  * Return: 0 if linked list empty.
  */

int pop_listint(listint_t **head)
{
	listint_t *d;

	if (*head == NULL)
		return (0);
	d = *head;
	*head = (*head)->next;
	free(d);
	d = NULL;
	return (1);
}
