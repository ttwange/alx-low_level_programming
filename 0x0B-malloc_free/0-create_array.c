#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the initializing char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			p[i] += c;
		return (p);
	}
}
