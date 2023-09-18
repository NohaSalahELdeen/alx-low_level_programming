#include "main.h"
/**
* _strcpy - function name
* @dest: pointer
* @src: pointer
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
