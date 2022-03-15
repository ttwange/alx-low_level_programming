#include "main.h"

/**
 *_islower -checks whether is lower or not
 *@c: ASCII code character
 *
 * Return : 0 if not and 1 if lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
