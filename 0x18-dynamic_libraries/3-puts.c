#include "main.h"
/**
* _puts - function that prints a string
* @str: string to print it
* Return: string
*/
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s + 0);
s++;
}
_putchar('\n');
}
