#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer.
 * @index: index of the node.
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	ptr = head;
	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
