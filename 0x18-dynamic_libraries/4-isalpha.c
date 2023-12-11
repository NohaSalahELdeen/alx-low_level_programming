#include "main.h"
/**
* _isalpha - Checks for alphabetic
* @c: The character to be checked
* Return: 1 if  alphabetic character or 0 if not
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
