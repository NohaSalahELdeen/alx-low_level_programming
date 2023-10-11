#include "3-calc.h"
#include <stdio.h>
/**
  * op_add - add two number
  * @a: first number
  * @b: second number
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two number
  * @a: first number
  * @b: second number
  * Return: difference of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplicat two number
  * @a: first number
  * @b: second number
  * Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division two number
  * @a: first number
  * @b: second number
  * Return: division of a by b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - remainder of the division of two number
  * @a: first number
  * @b: second number
  * Return: remainder of the division of a by b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
