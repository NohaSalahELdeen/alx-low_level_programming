#include "main.h"
/**
* swap_int - swap function
* @a: number to swap
* @b: number to swap
* Return: 0
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
