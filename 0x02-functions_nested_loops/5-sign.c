#include "main.h"
/**
* print_sign - Prints sign number
* @n: The number to be checked
* Return: 1 if positive, or  -1 if negative or 0 if slse
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
