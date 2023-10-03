#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: character.
 * Return: pointer or null.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
array = malloc(size * sizeof(char));
if (size == 0 || array == 0)
{
	return (0);
}
for (i = 0; i < size; i++)
{
	array[i] = c;
}
return (array);
}
