#include <stdio.h>
/*
* main entery point
*Return: 0 Seccess
*/
int main(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (x != y && x < y)
{
putchar(x + 48);
putchar(x + 48);
putchar(' ');
putchar(x + 48);
putchar(y + 48);
if (x < 8 || y < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
