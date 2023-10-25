#include "lists.h"
/**
  * delete_nodeint_at_index -  deletes the node at index
  * @index: the index of the node that should be deleted
  * @head: pointer to pointer
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;

	a = *head;
	b = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		b = *head;
		*head = b->next;
		free(b);
		return (1);
	}
	else
	{
	while (index != 0)
	{

		a = b;
		b = b->next;
		index--;
	}
		a->next = b->next;
		free(b);
		return (1);
	}
	return (-1);
}
