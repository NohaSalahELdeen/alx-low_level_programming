#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - calculate string length
  * @s: string
  * Return: the length
  */

int _strlen(char *s)
{
	int i, x = 0;

	for (i = 0; s[i] != '\0'; i++)
		x++;
	return (x);
}

/**
  * _strcpy - copy string from s to d
  * @de: copy to
  * @su: copy from
  * Return: d
  */
char *_strcpy(char *de, char *su)
{
	int i, l;

	l = _strlen(su);
	for (i = 0; i < l; i++)
		de[i] = su[i];
	de[i] = '\0';
	return (de);
}

/**
  * new_dog - new dog details
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (d->name == NULL)
		{
			free(d->name);
			return (NULL);
		}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (d->owner == NULL)
		{
			free(d->owner);
			free(d);
			return (NULL);
		}


		d->name = _strcpy(d->name, name);
		d->age = age;
		d->owner = _strcpy(d->owner, owner);
	return (d);
}
