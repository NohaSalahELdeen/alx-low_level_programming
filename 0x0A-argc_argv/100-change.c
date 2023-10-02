#include <stdio.h>
#include <stdlib.h>
/**
* main - main function.
* @argc: first main argument.
* @argv: array.
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int cent, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cent = atoi(argv[1]);
while (cent > 0)
{
if (cent >= 25)
	cent -= 25;
if (cent >= 10)
	cent -= 10;
if (cent >= 5)
	cent -= 5;
if (cent >= 2)
	cent -= 2;
if (cent >= 1)
	cent -= 1;
coins++;
}
if (cent > 0)
{
printf("%d\n", 0);
}
printf("%d\n", coins);
return (0);
}
