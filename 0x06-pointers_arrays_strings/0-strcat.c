#include "main.h"
/**
* _strcat - function that concatenates two strings
* @dest: first string
* @src: second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, length;
length = 0;
while (dest[length])
	length++;
for (i = 0; src[i]; i++)
dest[length++] = src[i];
return (dest);
}
