#include <stdio.h>
/**
* main -Entry point
* Return: 0 seccess
*/
int main(void)
{
char x, y;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
