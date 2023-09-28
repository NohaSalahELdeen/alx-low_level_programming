#include "main.h"
/**
* sqr - function that find the root
* @result: result number.
* @root: number.
* Return: integer value
*/
int sqr(int result, int root)
{
if (root * root == result)
return (root);
else if (root * root < result)
return (sqr(result, root + 1));
else
return (-1);
}

/**
* _sqrt_recursion - function returns the natural square root of a number
* @n: the number
* Return: squre root or -1
*/
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}
