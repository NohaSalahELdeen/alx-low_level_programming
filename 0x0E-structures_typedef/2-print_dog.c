#include "dog.h"
#include <stdio.h>
/**
  * print_dog - function name
  * @d: struct var name
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,
					d->age, d->owner);
		}
		else
		{
			d->name = "(nil)";
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,
					d->age, d->owner);
		}
	}
	else
		printf("(nil\n)");
}
