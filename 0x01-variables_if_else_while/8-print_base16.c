#include<stdio.h>
/**
* main - Entry point
* Description
* describe the parameter
* Return: Always 0 (Success)
*/
int main(void)
{
int n, l;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
