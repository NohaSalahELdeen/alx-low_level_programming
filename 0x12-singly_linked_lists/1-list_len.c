#include "lists.h"
#include <stdio.h>

/**
  * list_len -  number of elements in a linked list.
  * @h: point to list.
  * Return:  number of elements.
  */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
