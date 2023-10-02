#include <stdio.h>
#include <stdlib.h>
/**
* main - basic function
* @argc: first argument
* @argv: array of argument
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int x, y, result;
	if (argc >= 3)
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
return (0);
}
