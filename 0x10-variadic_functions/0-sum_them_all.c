#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - sum of all its parameters
  * @n: number of parameter
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}
	return (sum);
	va_end(parameters);
}
