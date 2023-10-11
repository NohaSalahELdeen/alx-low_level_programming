#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - given as a parameter to  each element of an array
  * @array: array of element
  * @size: size of element
  * @action: pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
