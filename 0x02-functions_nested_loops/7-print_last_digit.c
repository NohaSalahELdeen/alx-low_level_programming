#include "main.h"
/**
* print_last_digit - print last digit of a number
* @n: The number to be chacked
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_d = n % 10;
if (last_d < 0)
last_d = last_d * -1;
_putchar (last_d + '0');
return (last_d);
}
