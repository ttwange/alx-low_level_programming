#include "dog.h"

/**
 * init_dog - initializes dog struct
 * @d: new name
 * @name: dog name
 * @age: dog owner
 * @owner: dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
