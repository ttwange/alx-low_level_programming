#include "main.h"
/**
 *_puts - prints a string, followed by a new line,
 *@str: pointer to the string to print

 #include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter++;
	}
}
