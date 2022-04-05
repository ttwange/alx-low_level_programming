#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, c, p, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j;
	s3 = (char *)malloc(sizeof(char) * (size + 1));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (c = 0; c < i; c++)
		s3[c] = s1[c];
	p = j;
	for (j = 0; j <= p; c++, j++)
		s3[c] = s2[j];

	return (s3);
}
