#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On sucess 1
 * On error, -1, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
