#include "main.h"
/**
* _strncat - function that concatenates two strings
* @dest: first string
* @src: second string
* @n: bytes that used
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, length;
length = 0;
while (dest[length])
length++;
for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[length + i] = src[i];
dest[length + i] = '\0';
return (dest);
}
