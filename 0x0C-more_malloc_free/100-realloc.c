#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _realloc -  reallocates a memory block.
  * @ptr: pointer point to old size.
  * @old_size: size of  allocated space.
  * @new_size: size of new memory.
  * Return: pointer to new allocate.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	return (NULL);
	}
	if (new_size > old_size)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			*((char *)new_p + i) = *((char *)ptr + i);
		free(ptr);
	}
	if (ptr == NULL)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
	}
	return (new_p);
}
