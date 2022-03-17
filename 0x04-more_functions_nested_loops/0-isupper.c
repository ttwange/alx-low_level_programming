#include <stdio.h>

/**
 * _isupper - checks  code for upper case or lower case
 *@c: character input
 * Return 1 if uppercase and 0 if lower case
 */

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
