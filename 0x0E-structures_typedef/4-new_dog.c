#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: dog owner
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *store;
	int j, k;

	store = malloc(sizeof(*store));
	if (store == NULL || name == NULL || owner == NULL)
	{
		free(store);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
	{
		;
	}
	for (k = 0; owner[k]; k++)
	{
		;
	}
	store->name = malloc(j + 1);
	store->owner = malloc(k + 1);
	if (store->name == NULL || store->owner == NULL)
	{
		free(store->name);
		free(store->owner);
		free(store);
		return (NULL);
	}
	store->name = name;
	store->age = age;
	store->owner = owner;

	return (store);
}
