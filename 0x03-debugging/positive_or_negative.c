#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main -Entry point
* @i: number for checked
* Return: 0 (seccess)
*/
void positive_or_negative(int i)
{
/**
*srand(time(0));
*i = rand() - RAND_MAX / 2;
*/
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
}
