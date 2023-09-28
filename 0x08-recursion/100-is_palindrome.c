#include "main.h"
/**
 * s_length - length of string.
 * @s: the string.
 * Return: length.
*/
int s_length(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + s_length(s + 1));
}

/**
 * s_compare - compare start and end of string.
 * @end: end of string.
 * @start: start of string.
 * @s: the string.
 * Return: 0 or 1.
*/

int s_compare(char *s, int end, int start)
{
if (*(s + end) == *(s + start))
{
if (end == start || end == start + 1)
{
	return (1);
}
return (0 + s_compare(s, end + 1, start - 1));
}
return (0);
}

/**
 * is_palindrome - function that check  string a palindrome
 * @s: string
 * Return: 1 or 0
*/

int is_palindrome(char *s)
{
if (*s == '\0')
{
	return (1);
}
return (s_compare(s, 0, s_length(s) - 1));
}
