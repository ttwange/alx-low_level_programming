#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size in bytes
 * Return: pointer to the memory created.
 */

void *malloc_checked(unsigned int b)
{
	char *hhh;

	hhh = malloc(b);
	if (hhh == NULL)
		exit(98);

	return (hhh);
}
