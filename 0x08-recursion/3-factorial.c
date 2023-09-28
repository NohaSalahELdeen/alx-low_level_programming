#include "main.h"
/**
* factorial - a function that returns the factorial of a given number
* @n: the given number
* Return: 0 or -1
*/
int factorial(int n)
{
int x;
if (n == 0)
{
	return (1);
}
else if (n < 0)
{
	return (-1);
}
x = n * factorial(n - 1);
return (x);
}
