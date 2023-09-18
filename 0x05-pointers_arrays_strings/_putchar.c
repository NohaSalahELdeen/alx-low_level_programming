#include <unistd.h>
/**
* _putchar -write character a
* @a: the character to print
* Return: 1 seccess
*/
int _putchar(char a)
{
return (write(1, &a, 1));
}
