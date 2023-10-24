#include "lists.h"

/**
  * insert_nodeint_at_index - t inserts a new node at a given position.
  * @head: pointer to pointer point to linked list.
  * @idx:  index of the list where the new node should be added.
  * @n: value to add.
  * Return: the address of the new node, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *ptr1;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr1 = *head;
	if (!idx)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (NULL);

	}
	for (i = 0; i != idx - 1; i++)
		ptr1 = ptr1->next;
	ptr->next = ptr1->next;
	ptr1->next = ptr;
	return (ptr);
}
