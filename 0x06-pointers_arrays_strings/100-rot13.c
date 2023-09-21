#include "main.h"
/**
* rot13 -  function that encodes a string using rot13
* @s: string to codes
* Return: string
*/
char *rot13(char *s)
{
int i, j;
char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 57 ; j++)
{
if (s[i] == a[j])
s[i] = b[j];
}
}
return (s);
}
