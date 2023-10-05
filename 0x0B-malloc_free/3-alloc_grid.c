#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of array.
  * @height: height of array
  * Return: pointer or null.
  */
int **alloc_grid(int width, int height)
{
	int i, j, **x;

	x = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || x == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	x[i] = malloc(sizeof(int) * width);

	if (x[i] == NULL)
	{
		free(x);
		for (j = 0; j <= height; j++)
			free(x[j]);
		return (NULL);
	}
	for (j = 0; j < width; j++)
		x[i][j] = 0;
	}
	return (x);
}
