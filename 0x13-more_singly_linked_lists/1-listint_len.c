#include "lists.h"

/**
  * listint_len - function returns the number of elements in a linked list.
  * @h: pointer to the list.
  * Return: number of elements.
  */

size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *p;

	p = h;
	for (i = 0; p != NULL; i++)
	p = p->next;
	return (i);
}
