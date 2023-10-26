#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index.
  * @n: value.
  * @index: the index, starting from 0.
  * Return: the value of the bit at index index or -1 if an error occured.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	x = x << index;
	if (n & x)
		return (1);
	else
		return (0);
}
