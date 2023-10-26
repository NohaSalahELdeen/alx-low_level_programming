#include "main.h"

/**
  * flip_bits -  flip to get from one number to another.
  * @n: first number.
  * @m: second number.
  * Return:  the number of bits.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, i;

	x = n ^ m;
	for (i = 0; x > 0; i++)
	{
		x = x & (x - 1);
	}
	return (i);
}
