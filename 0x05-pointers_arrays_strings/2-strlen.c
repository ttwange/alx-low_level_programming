#include "main.h"
/**
 * _strlen -returns length ofa string
 * @s: pointer to the string to check
 * Return - always 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
