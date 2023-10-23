#include "lists.h"

/**
  * free_listint2 - free linked list.
  * @head: pointer to pointer point to list.
  */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}
