#include "dog.h"
#include <stdlib.h>
/**
  * init_dog -  initialize a variable
  * @d: pointer to variable name
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
