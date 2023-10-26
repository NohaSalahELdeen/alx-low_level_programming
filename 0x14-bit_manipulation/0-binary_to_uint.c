#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b:  pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 or Null.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}
