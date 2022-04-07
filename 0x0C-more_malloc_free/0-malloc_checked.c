#include "main.h"
#include <stdlib.h>

/**
 *_checked - checks for allcoated memory
 *@b: integer pointer
 *Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if( p == NULL)
		exit(98);

	return(p);
}
