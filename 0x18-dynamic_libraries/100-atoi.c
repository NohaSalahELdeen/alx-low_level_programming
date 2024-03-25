#include "main.h"
/**
* _atoi - function name
* @s: string to convert
* Return: 0
*/
int _atoi(char *s)
{
int a, b, i;
a = 0;
b = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
b *= -1;
if (s[i] > 47 && s[i] < 58)
{
if (a < 0)
a = (a * 10) - (s[i] - '0');
else
a = (s[i] - '0') * -1;
if (s[i + 1] < 48 || s[i + 1] > 57)
break;
}
}
if (b < 0)
a *= -1;
return (a);
}
