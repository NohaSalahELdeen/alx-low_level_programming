#include "main.h"
/**
* _isupper - check uppercase
* @c: number to be checked
* Return: 1 if upper
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
