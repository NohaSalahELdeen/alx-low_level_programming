#include <stdio.h>
#include "main.h"
/**
* _abs - Computes the absolute value of an integer.
* @x: The number to be computed
* Return: value of number or zero
*/
int _abs(int x)
{
if (x < 0)
{
return (-x);
}
return (x);
}
