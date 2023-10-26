#include "main.h"

/**
  * print_binary -  prints the binary representation of a number.
  * @n: number.
  */

void print_binary(unsigned long int n)
{
	unsigned int remainder = 0;

	if (n > 1)
		print_binary(n >> 1);

	remainder = n & 1;
	_putchar(remainder + '0');
}
