#include "lists.h"

/**
  * pop_listint - deletes head node.
  * @head: pointer point to first node.
  * Return: 0 if linked list empty.
  */

int pop_listint(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return (0);

	p = *head;
	*head = (*head)->next;
	p->next = NULL;
	free(p);
	p = NULL;
	return (1);
}
