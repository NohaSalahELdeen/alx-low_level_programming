#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print string
  * @separator: string to be printed between the strings
  * @n:  number of strings
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list s;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(s, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(s);
}
