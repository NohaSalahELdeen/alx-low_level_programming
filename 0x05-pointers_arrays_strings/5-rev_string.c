#include "main.h"
/**
* rev_string -function name
* @s: string
*/
void rev_string(char *s)
{
int i, len;
char tmp;
for (len = 0; s[len] != '\0'; len++)
continue;
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
