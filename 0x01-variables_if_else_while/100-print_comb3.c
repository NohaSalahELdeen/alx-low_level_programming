#include <stdio.h>
/**
* main - Entr point
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (x != y || x < y)
{
putchar(x + 48);
putchar(y + 48);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
