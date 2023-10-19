#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_node_end - adds a new node at the end of a list
  * @head: point to pointer
  * @str: string to duplicate
  * Return: address of the new element, or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *tail;
	int i, n = 0;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		n++;

	end->len = n;
	end->next = NULL;
	tail = *head;

	if (*head == NULL)
		*head = end;
	else
	{
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
		tail->next = end;
	}
	return (*head);
}
