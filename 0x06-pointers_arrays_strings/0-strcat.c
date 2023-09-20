#include "main.h"
/**
* _strcat - function that concatenates two strings
* @dest: first string
* @src: second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0; i != '\0'; i++)
dest[i] += src[i];
return (dest);
}
