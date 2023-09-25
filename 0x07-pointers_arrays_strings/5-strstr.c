#include "main.h"
/**
* _strstr - a function that locates a substring.
* @haystack: main string.
* @needle: substring.
* Return: needle or null.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
char *p;
for (i = 0; haystack[i] != '\0'; i++)
{
	for (j = 0; needle[j] != '\0'; j++)
	if (needle[j] == haystack[i - 5])
	{
	p = &haystack[i];
	return (p);
	}
}
return (0);
}
