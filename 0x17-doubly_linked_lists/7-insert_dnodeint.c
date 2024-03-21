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

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	ptr = *h;
	for (i = 0; i != idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = new;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
