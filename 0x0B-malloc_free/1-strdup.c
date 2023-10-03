#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: 0 or pointer.
*/
char *_strdup(char *str)
{
int i, n;
char *s;
for (i = 0; str[i] != '\0'; i++)
n++;
s = malloc(sizeof(char) * (n + 1));
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
if (str == 0 || s == 0)
{
return (0);
}
return (s);
free(s);
}
