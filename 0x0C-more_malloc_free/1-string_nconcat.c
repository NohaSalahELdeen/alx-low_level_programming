#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of string to concat
  * Return: pointer point to a newly allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, s1_len = 0, s2_len = 0;
char *new_s;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)
	s1_len++;
for (i = 0; s2[i] != '\0'; i++)
	s2_len++;

new_s = malloc(sizeof(char) * (s1_len + s2_len) + 1);
if (new_s == NULL)
	return (NULL);

if (n > s2_len)
{
	for (i = 0; s1[i] != '\0'; i++)
		new_s[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		new_s[s1_len + i] = s2[i];
	new_s[s1_len + i] = '\0';
}
else
{
	for (i = 0; s1[i] != '\0'; i++)
		new_s[i] = s1[i];
	for (i = 0; i < n; i++)
		new_s[s1_len + i] = s2[i];
	new_s[s1_len + i] = '\0';
}
return (new_s);
}
