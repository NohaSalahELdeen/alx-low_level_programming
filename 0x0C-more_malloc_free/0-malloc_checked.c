#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked -  allocates memory.
  * @b: integer number.
  * Return: pointer or 98.
  */
void *malloc_checked(unsigned int b)
{
	int *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	else
		return (num);
}
