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
int i, n = 0;
char *s;
if (str == 0)
return (0);
for (i = 0; str[i] != '\0'; i++)
n++;
s = malloc(sizeof(char) * (n + 1));
if (s == 0)
return (0);
for (i = 0; str[i] != '\0'; i++)
s[i] = str[i];
return (s);
}
