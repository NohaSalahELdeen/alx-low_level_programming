#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_node -adds a new node at the beginning of a list.
  * @head: pointer to pointer point to first node.
  * @str: string to duplicate.
  * Return:  address of the new element, or NULL.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int n = 0, i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		n++;
	node->len = n;
	node->next = *head;
	*head = node;

	return (*head);
}
