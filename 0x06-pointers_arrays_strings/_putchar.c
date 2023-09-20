#include <unistd.h>
/**
* _putchar - function print one character
* @c: character to print
* Return: 1.
*/
int _putchar(char a)
{
return (write(1, &a, 1));
}
