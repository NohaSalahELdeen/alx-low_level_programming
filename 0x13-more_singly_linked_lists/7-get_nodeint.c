#include "lists.h"

/**
  * get_nodeint_at_index -a function returns the nth node of a linked list.
  * @head: pointer to list.
  * @index: the index of the node.
  * Return: nth node.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
