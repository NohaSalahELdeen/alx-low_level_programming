#include "main.h"
/**
 * prime_num - check prime number
 * @a: input number
 * @b: input number
 * Return: number
*/
int prime_num(int a, int b)
{
if (b >= a && a > 1)
return (1);
else if (a % b == 0 || a <= 1)
return (0);
else
return (prime_num(a, b + 1));
}

/**
 * is_prime_number -  a function that returns input a prime number
 * @n: input number
 * Return: 1 or 0.
*/

int is_prime_number(int n)
{
return (prime_num(n, 2));
}
