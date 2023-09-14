#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main -Entry point
* @n: number for checked
* Return: 0 (seccess)
*/
void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
}
