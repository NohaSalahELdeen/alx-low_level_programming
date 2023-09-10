#include <stdio.h>
/**                                                                                                                                                  
* main - Entr point                                                                                                                                  
* Return: Always 0 (Success)                                                                                                                         
*/
int main(void)
{
  int x, y ,z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
  for (z = 0; z <= 9; z++)
{
if (x != y && x < y && y != z && y < z)
{
putchar(x + 48);
putchar(y + 48);
putchar(z + 48);
if (x < 7 || y < 8 || z < 9)
  {
putchar(',');
putchar(' ');
  }
}
}
}
}
putchar('\n');
return (0);
}
