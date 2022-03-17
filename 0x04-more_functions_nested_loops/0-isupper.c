
#include <stdio.h>

/**
 * main _isupper9(int c) checks  code for upper case
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
