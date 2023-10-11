#include "function_pointers.h"

/**
  * print_name - afunction that prints a name
  * @name: name to print it
  * @f: pointer that point to function
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
