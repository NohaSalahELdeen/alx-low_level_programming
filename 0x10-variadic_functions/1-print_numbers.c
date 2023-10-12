#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print number
  * @separator: string to be printed between numbers
  * @n: number passed to the function
  * Return: nothings
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list output;

	va_start(output, n);
	for (i = 0; i < n; i++)
	{
		if (separator ==  NULL)
		{
			printf("%d", va_arg(output, int));
		}
		else
		{
			printf("%d", va_arg(output, int));
			if (i != n - 1)
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(output);
}
