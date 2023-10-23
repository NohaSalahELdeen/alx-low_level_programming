#include "lists.h"

/**
  * add_nodeint -  adds a new node at beginning.
  * @head: pointer to pointer point to list
  * @n: element in the list
  * Return: the address of the new element, or NULL.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;

	p->next = *head;
	*head = p;
	return (*head);
}
