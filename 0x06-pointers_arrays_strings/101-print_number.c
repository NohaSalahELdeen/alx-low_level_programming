#include "main.h"
/**
* print_number - function that prints an integer
* @n: number to print
* Return: nothings
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n *= -1;
}
else if (n > 10)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
