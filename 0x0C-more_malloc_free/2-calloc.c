#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
  * _calloc - allocates memory for an array
  * @nmemb: element of array
  * @size: size of array
  * Return: pointer to the allocated memory or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	if (arr)
		bzero(arr, nmemb * size);

	return (arr);
}
