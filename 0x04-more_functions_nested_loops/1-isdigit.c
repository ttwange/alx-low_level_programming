#include "main.h"

/**
 * _isdigit - checks for digit 
 * @c: character
 * Return 1 for digit and 0 not digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
