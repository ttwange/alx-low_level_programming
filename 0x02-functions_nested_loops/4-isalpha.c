<<<<<<< HEAD
thojn
=======
#include "main.h"

/**
 * _isalpha - checks if character is alphabetical
 * @c: ascii character.
 *
 * Return: 1 if it's a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
>>>>>>> fd047f6e3ab9d8138781b23feb2f52cd50564ceb
