#include "lists.h"
#include <stdlib.h>

/**
  * free_list -  frees a list
  * @head: pointer to node
  * Return: nothing
  */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
