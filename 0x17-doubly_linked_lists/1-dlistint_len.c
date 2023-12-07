#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked list.
  * @h: pointer.
  * Return: the number of elements.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *ptr;

	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	return (i);
}
