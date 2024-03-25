#include "main.h"
/**
* _puts - function that prints a string
* @str: string to print it
* Return: string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
