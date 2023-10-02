#include "main.h"
/**
* _strncpy -  function that copies a string
* @dest: first string
* @src: second string
* @n: bytes that copied
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = '\0';
for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
return (dest);
}
