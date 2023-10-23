#include "lists.h"

/**
  * free_listint - free linked list.
  * @head: pointer to listl.
  */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
