#include "lists.h"
/**
  * print_dlistint -  prints all the elements of a dlistint_t list
  * @h: pointer point to the list
  * Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *ptr;

	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
