#include "main.h"
#include <stdlib.h>
/**
  * str_concat - oncatenates two strings.
  * @s1: first string.
  * @s2: second string
  * Return: pointer or null.
  */
char *str_concat(char *s1, char *s2)
{
	int i, s1_length = 0, s2_length = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_length++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_length++;

	s = malloc(sizeof(char) * (s1_length + s2_length) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		s[s1_length + i] = s2[i];
	return (s);
}
