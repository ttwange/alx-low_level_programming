#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size in bytes
 * Return: pointer to the memory created.
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
