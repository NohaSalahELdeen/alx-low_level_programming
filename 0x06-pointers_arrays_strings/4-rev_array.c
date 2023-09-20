#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: first array to reverse
 * @n: second array to reerse
 * Return: nothings
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
