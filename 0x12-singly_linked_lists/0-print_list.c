#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * print_list - print a list of elements
  * @h: pointer
  * Return: numbers of nods
  */

size_t print_list(const list_t *h)
{

	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	}
	return (i);
}
