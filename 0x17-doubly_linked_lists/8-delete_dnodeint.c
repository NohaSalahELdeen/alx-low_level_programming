#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index.
  * @head: pointer.
  * @index: the index of the node.
  * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	ptr = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr != NULL; i++)
		ptr = ptr->next;
	if (ptr == NULL)
		return (-1);
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	free(ptr);
	return (1);
}
