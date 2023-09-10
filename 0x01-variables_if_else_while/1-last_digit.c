#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -Entry point
* Return: 0 seccess
*/
int main(void)
{
int n;
int digit = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
if (n == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);
if (n > 6 && n != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
return (0);
}
