#include "main.h"
/**
* infinite_add - function that adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer used to store result
* @size_r: buffer size
* Return: result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, length, x, y, z, c_out;
i = 0;
j = 0;
c_out = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
length = i;
else
length = j;
if (length + 1 > size_r)
return (0);
r[length] = '\0';

for (x = length - 1; x >= 0; x--)
{
i--;
j--;
if (i >= 0)
y = n1[i] - '0';
else
y = 0;
if (j >= 0)
z = n2[j] - '0';
else
z = 0;
r[x] = (y + z + c_out) % 10 + '0';
c_out = (y + z + c_out) / 10;
}
if (c_out == 1)
{
r[length + 1] = '\0';
if (length + 2 > size_r)
return (0);
while (length-- >= 0)
r[length + 1] = r[length];
r[0] = c_out + '0';
}
return (r);
}
