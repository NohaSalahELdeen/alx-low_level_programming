#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  a function that prints the sum of the int array
* @a: array
* @size: size of array
* Return: nothings
*/
void print_diagsums(int *a, int size)
{
int i, x = 0, y = 0;
for (i = 0; i < size; i++)
{
	x += a[i];
	y += a[size - i - 1];
	a += size;
}
printf("%d, ", x);
printf("%d\n", y);
}
