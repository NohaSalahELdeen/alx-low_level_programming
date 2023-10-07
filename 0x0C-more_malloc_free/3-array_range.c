#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range -  creates an array of integers.
  * @min: smallest number
  * @max: bigest number
  * Return: newly created array or null
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
