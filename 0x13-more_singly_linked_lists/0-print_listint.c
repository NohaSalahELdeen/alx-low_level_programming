#include "lists.h"

/**
  * print_listint -  prints all the elements of a listint_t list.
  * @h: pointer to the list.
  * Return: the number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *p;

	p = h;
	for (i = 0; p != NULL; i++)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
	return (i);
}
