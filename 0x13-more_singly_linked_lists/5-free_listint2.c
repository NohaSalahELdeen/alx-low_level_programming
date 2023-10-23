#include "lists.h"

/**
  * free_listint2 - free linked list.
  * @head: pointer to pointer point to list.
  */

void free_listint2(listint_t **head)
{
	listint_t *p, *ptr;

	p = *head;
	while (p != NULL)
	{
		ptr = p;
		p = p->next;
		free(ptr);
	}
	*head = NULL;
}
