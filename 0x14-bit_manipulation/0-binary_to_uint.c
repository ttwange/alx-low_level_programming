#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a, k = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] == '1')
			k = k * 2 + 1;
		else
			k = k * 2 + 0;
	}
	return (k);
}
