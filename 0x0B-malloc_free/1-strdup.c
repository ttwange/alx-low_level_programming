#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a duplicate string
 * @str: the string to compare
 * Return: pointer to the duplicate or NULL
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	m = (char *)malloc(sizeof(char) * (j + 1));

	if (m == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		m[i] = str[i];
	}
	return (m);
}
