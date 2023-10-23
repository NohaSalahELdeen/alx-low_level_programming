#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: pointer to pointer point to list.
  * @n: element of list.
  * Return:  the address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;

	ptr = *head;
	if (*head == NULL)
		*head = p;
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = p;
	}
	return (*head);

}
