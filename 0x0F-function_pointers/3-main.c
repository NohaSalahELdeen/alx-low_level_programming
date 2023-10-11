#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - main function
  * @argc: first argument
  * @argv: second argument
  * Return: simple operation
  */

int main(int argc, char *argv[])
{
	int num1, num2, (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	cal = get_op_func(argv[2]);
	if (!cal)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *argv[2] == '/') || (num2 == 0 && *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", cal(num1, num2));
	return (0);
}
