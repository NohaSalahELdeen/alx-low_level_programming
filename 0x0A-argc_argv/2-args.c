#include <stdio.h>
/**
* main - basic funtion.
* @argc: first argument.
* @argv: second argument.
* Return: always 0.
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
	return (0);
}
