#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - basic function.
* @argc: argument.
* @argv: array of argument.
* Return: 0 or 1.
*/
int main(int argc, char *argv[])
{
int i, result;
if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
	if (*argv[i] < '0' || *argv[i] > '9')
	{
	printf("Error\n");
	return (1);
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
}
else if (argc == 1)
{
printf("%d\n", 0);
}
return (0);
}
