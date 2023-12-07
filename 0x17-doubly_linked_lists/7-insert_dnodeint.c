#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: pointer.
  * @idx: the index of the list.
  * @n: integer.
  * Return: the address of the new node, or NULL if it failed.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *ptr;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	ptr = *h;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (*h);
	}
	for (i = 0; i != idx - 1; i++)
		ptr = ptr->next;
	new->next = ptr->next;
	ptr->next->prev = new->next;
	ptr->next = new;
	new->prev = ptr;
	return (ptr);
}
