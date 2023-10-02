#include "main.h"
#include <string.h>
/**
* _strlen - function name
* @s: the name of array
* Return: length string
*/
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; i++)
s++;
return (i);
}
