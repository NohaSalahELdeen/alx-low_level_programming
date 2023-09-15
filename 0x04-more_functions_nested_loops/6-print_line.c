#include "main.h"
/**
* print_line - draws a straight line
* @n: number of underscore
*/
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
else
_putchar('\n');
}
