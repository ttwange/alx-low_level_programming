#include<stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory
 * @d: the struct allocated memory
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
